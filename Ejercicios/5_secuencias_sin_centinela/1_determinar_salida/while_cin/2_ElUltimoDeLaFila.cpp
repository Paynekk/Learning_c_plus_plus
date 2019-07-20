/*
El Último de la Fila 
Qué salida produce el siguiente programa
con la entrada

4 -1 -2 -3 -6
1 9
7 0 0 0 0 0 0 42
5 10 20 30 40 50
2 1 0
 */

#include <iostream>
using namespace std;

int main() {
   int n, x; // se declaran 2 enteros
   while (cin >> n) {// se le un entero  y si no lo es no pasa
      int x;
      for (int i = 0; i < n; i++) { // entra en el for el numero de veces que es n 
         cin >> x;
      } 
      cout << x << endl;
   }
}