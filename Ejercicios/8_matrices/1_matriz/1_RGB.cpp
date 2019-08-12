/*
 Imagen RGB

  Declara un tipo ImagenRGB que sea una matriz de 640 filas y 480 columnas de píxeles,
   donde cada píxel es una tupla Pixel con 3 componentes enteras r, g y b.
*/

typedef int ImagenRGB[2][2];
struct RGB{
  int r,g,b;
};

#include <iostream>
using namespace std;
int main (){
  RGB ImagenRGB[2][2];
  ImagenRGB[0][0].r = 1;
  ImagenRGB[0][0].g = 2;
  ImagenRGB[0][0].b = 3;
  cout << ImagenRGB[0][0].b << endl; 


}