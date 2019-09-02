/*
 Marco 
Determina la salida del siguiente programa en función los dos enteros que lee de la entrada 
*/

#include <iostream>
#include <fstream>
using namespace std;

bool extremo(int x, int E) {
   return x == 1 || x == E;
}

int main() {
   ofstream F("marco.txt");// esto no se utiliza
   int a, b;
   cin >> a >> b;
   for (int i = 1; i <= a; i++) {
      for (int j = 1; j <= b; j++) { 
         if (extremo(i, a) || extremo(j, b)) {// a partir de 3 -3 se puede crear un marco
            cout << '*';// ya que cada vez que pase por un numero que no valide este if sera el centro de un recuadro
         } else {// que sera igual a un guion mientras el alrededor un asteriscox
            cout << '.';
         }
      }
      cout << endl;
   }
}