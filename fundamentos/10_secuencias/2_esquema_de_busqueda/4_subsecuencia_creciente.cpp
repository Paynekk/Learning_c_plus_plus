/*Dada una secuencia de enteros terminada en 0
  determinar si contiene una subsecuencia creciente 
  de alemenos 5 elementos
  11 12 13 14 15 16 -1 -2 -3 -4 -5 -6  --> Si
  -10 -9 - 8 -7 -6 -20 -19 -18 -17 -30 --> No
 */

#include <iostream>
using namespace std;

int main(){
  int n, un, crez = 1;
  cin >> un >> n; // se asume que como minimo hay un elemento en la secuencia
  while(n != 0 && crez < 5){ // cuando n sea diferente a 0, y crez sea menor a 5 entra y si no sale del while
    if(un < n){  // numero anterior es menor que numero siguiente 
        crez++;  // aumenta el creciente y brinca a  la linea 20
    } else {   // y si no 
      crez = 1; // es igual a 1 y va a la linea 20
    }
      un = n;    //   numero siguiente es igual al numero anterior 
      cin >> n;  // y el numero siguiente se inserta  y vuelve al while
  }
  if (crez == 5){  
    cout << "Si hay una subsecuencia... " << endl;
  }else {
    cout << "NO hay una subsecuencia..."  << endl;
  }
}