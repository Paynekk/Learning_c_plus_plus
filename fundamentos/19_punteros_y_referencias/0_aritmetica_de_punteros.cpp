#include <iostream>
using namespace std;

int main(){
  double T[5] = {1.0,2.0,3.0,4.0,5.0};
  double *p;
  p = &T[0];
  /* p = p + 2; */
  /*se desplaza a la segunda casilla y no se suma 1 byte sobre la posicion de entero
  que marca el puntero, si no se desplaza en proporcion al tama;o de los datos
  sumale uno desplaza el puntero tantos bytes del tipo del puntero*/
  cout << *(p+3) << endl;
  /* cout << *&T[0] << endl; */
}
/*  
las variables estan guardadas en memoria de forma consecutiva

*/