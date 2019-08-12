/*
 Imagen RGB

  Declara un tipo ImagenRGB que sea una matriz de 640 filas y 480 columnas de píxeles,
   donde cada píxel es una tupla Pixel con 3 componentes enteras r, g y b.
*/
struct RGB{
  int r,g,b;
};
typedef RGB ImagenRGB[2][2];


#include <iostream>
using namespace std;
int main (){
  ImagenRGB hola;
  hola[0][0].r = 1;
  hola[0][0].g = 2;
  hola[0][0].b = 3;
  cout << hola[0][0].b << endl; 
}