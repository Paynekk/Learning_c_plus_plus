/*
Unidades 
Determina la salida de este programa
si la entrada es la siguiente
0 -1 8 -22 -79 15 +7 -.



RESPUESTA = el programa lee el tamaño del array de strings y el resultado -1 da igual a la segundo elemento
del array de string  por lo que el primer simbolo o letra no se lee. 
*/

#include <iostream>
using namespace std;

int main() {
   string s, t, p;
   while (cin >> s) { // se inserta un entero
      if (s[0] == '-') {// si es un numero con un menos(negativo)
         t += s[s.size()-1];//    --> t es igual a y s[al tamaño del array-1] ejemplo hola =s[4 -1]
         cout << t << endl;//     -->
      }
   }
}