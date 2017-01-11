#include <X11/Xlib.h> // pour utiliser X11
#include <X11/Xutil.h> // pour utiliser X11
#include <unistd.h> //pour fonction d'attente sleep
#include <stdio.h>
#define LARGEUR 200
#define HAUTEUR 200

void Dessine(Display *aDpy, Window aW, GC aGc){
  int Blanc = WhitePixel(aDpy, DefaultScreen(aDpy));
  XSetForeground(aDpy, aGc,Blanc); //Couleur du stylo
  // On dessine (à mettre dans une fonction dessine) :
  XDrawLine(aDpy, aW, aGc, 0, 0, LARGEUR, HAUTEUR);
  XDrawPoint(aDpy, aW, aGc, 10, 50);
  XDrawPoint(aDpy, aW, aGc, 10, 55);
  //fin des fonctions de dessin
}

void Triangle(Display *aDpy, Window aW, GC aGc){
  int Blanc = WhitePixel(aDpy, DefaultScreen(aDpy));
  XSetForeground(aDpy, aGc,Blanc);
  XDrawLine(aDpy, aW, aGc, 100, 10, LARGEUR-10, HAUTEUR-10);
  XDrawLine(aDpy, aW, aGc, 100, 10, 10, HAUTEUR-10);
  XDrawLine(aDpy, aW, aGc, 10, HAUTEUR-10, LARGEUR-10, HAUTEUR-10);
}

void Rectangle(Display *aDpy, Window aW, GC aGc, int x, int y, int l, int h){
  int Blanc = WhitePixel(aDpy, DefaultScreen(aDpy));
  XSetForeground(aDpy, aGc,Blanc);
  XDrawLine(aDpy, aW, aGc, x, y, l, y);
  XDrawLine(aDpy, aW, aGc, l, y, l, h);
  XDrawLine(aDpy, aW, aGc, l, h, x, h);
  XDrawLine(aDpy, aW, aGc, x, h, x, y);
}

void FillCarre(Display *aDpy, Window aW, GC aGc, int x, int y, int taille){
  for(; taille>0; taille--){
    Rectangle(aDpy, aW, aGc, x, y, x+taille, y+taille);
  }
}

void DrawTab(Display *aDpy, Window aW, GC aGc){
  int Blanc = WhitePixel(aDpy, DefaultScreen(aDpy));
  XSetForeground(aDpy, aGc,Blanc);

  int tab [][2]= { {20,20},{20,40},{40,40},{40,20},{20,20}, {-1,-1}};

  int i = 0;
  int x = tab[i][0];
  int x_precedent = tab[i][0];
  int y = tab[i][1];
  int y_precedent = tab[i][1];

  do{
    XDrawLine(aDpy, aW, aGc, x_precedent, y_precedent, x, y);
    x_precedent = x;
    y_precedent = y;
    i++;
    x = tab[i][0];
    y = tab[i][1];
  }while(x != -1 || y != -1);
}

void DrawFile(Display *aDpy, Window aW, GC aGc, char *FileName){
  int Blanc = WhitePixel(aDpy, DefaultScreen(aDpy));
  XSetForeground(aDpy, aGc,Blanc);

  int i = 0;
  int x, x_precedent;
  int y, y_precedent;

  FILE* fichier;
  fichier = fopen(FileName, "r");

  if(fichier != NULL){

    fscanf(fichier, "%i,%i", &x, &y);
    x_precedent = x;
    y_precedent = y;

    while(1){
      fscanf(fichier, "%i,%i", &x, &y);

      if(x == -1 || y == -1){
        break;
      }

      XDrawLine(aDpy, aW, aGc, x_precedent, y_precedent, x, y);
      x_precedent = x;
      y_precedent = y;
      i++;

      if(feof(fichier)){
        break;
      }
      i++;
    }
    fclose(fichier);
  }
  else {
    printf("Impossible d'ouvrir le fichier\n");
  }
}
int main (int argc, char* argv[]){
  XEvent e;
  Display *dpy = XOpenDisplay(NULL); //pointeur sur un ecran ouvert
  int Noir = BlackPixel(dpy, DefaultScreen(dpy));
  // creation fenetre : taille, couleur... :
  Window w = XCreateSimpleWindow(dpy, DefaultRootWindow(dpy), 0, 0, LARGEUR, HAUTEUR, 0, Noir, Noir);
  XMapWindow(dpy, w); // Affiche la fenetre sur l'ecran
  GC gc = XCreateGC(dpy,w,0,NULL); //il faut 1 Graphic Context pour dessiner
  XSelectInput(dpy, w, StructureNotifyMask); // Il faut attendre l’autowhile
  while(e.type != MapNotify) XNextEvent(dpy, &e); //risation de dessiner

  //Dessine(dpy,w,gc);
  //Triangle(dpy,w,gc);
  //Rectangle(dpy,w,gc, 10, 10, LARGEUR-10, HAUTEUR-10);
  //FillCarre(dpy,w,gc, 100, 10, 70);
  //DrawTab(dpy,w,gc);
  DrawFile(dpy,w,gc, argv[1]);


  XFlush(dpy); //Force l'affichage
  sleep(10); //on attend 10s avant de quitter

  return 0;
}
