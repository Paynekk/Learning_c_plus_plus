/*
Determinar si hay un elemento par en una secuencia 
de enteros acabada en -1 y decir en que posicion ocurre.

1 3 5 7 9 11 12 9 7 5 3 1 -1 

 */
#include <iostream>
using namespace std;
int main(){
  bool haypar = false;
  int n, pos;
  cin >> n;
  pos = 1;
  while( n!= -1 && !haypar){ // si n es diferente a -1 pasa y si es diferente a true pasa
      if(n % 2 == 0){   // 1.- si tiene modulo no es par  si es igual a 0, lo es y pasa
        haypar = true;  //  2.- haypar ahora es true el while se detiene y pasa a la linea 23
      } else {       // 1.- y si no entra aqui
        cin >> n;     // te pide un entero  y vuelve al while
        pos++;         // posicion aumenta conforme  no entre al if
      }
  }
  if (haypar){  
      cout << "Hay un par en la posicion " << pos << endl;
  }else{
      cout << "No hay ningun par" << endl;
  }
}