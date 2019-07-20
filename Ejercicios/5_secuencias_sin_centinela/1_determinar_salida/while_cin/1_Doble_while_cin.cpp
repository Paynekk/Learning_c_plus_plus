/*
Doble while cin 
Determina la salida de este programa
si la entrada son las dos líneas siguientes =

1␣2␣3↩ -->
4␣5␣6↩ --> 

 */

#include <iostream>
using namespace std;

int main() {
   int a = 0, b = 5, n;
   while (cin >> n) {  // si n es entero pasa 
      a += n;//           a = a + n
   }
   while (cin >> n) {// si es entero pasa .. si no pasa el entero dentro de b sera el mismo y 
      b += n;//         b = b + n          ... a la linea 22
   }
   cout << a << b << endl; 
}
