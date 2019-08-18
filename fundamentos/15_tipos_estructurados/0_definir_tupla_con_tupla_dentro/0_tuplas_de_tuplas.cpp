#include <iostream>
using namespace std;
struct Punto2D{
  double x,y;
};
struct Segmento2D{
Punto2D inicio, fin;
};

int main(){
  Punto2D p = {0.0, 1.0};
  Segmento2D s =  {{0.0, 0.0},{1.0,1.0}};
  /*                 x    y     x   y
  /               i n i c i o,  f i n
  "o"
  */
 s.inicio = {5.0, 0.0};//se puede 
 s.inicio.x = 0.0;
 s.inicio.y = 0.0;
 s.fin.x = 0.0;
 s.fin.y = 0.0;
 p.x = 10;
 

 

}