/*
Cruz 
Determina la salida de este programa
si la entrada es la siguiente:

a   f
 b g
  c
 h d
i   e

RESPUESTA= El programa utiliza los  numeros ascii el cual cada numero que entra se le restqa
el valor de a que es igual a 97

fuente = https://elcodigoascii.com.ar/codigos-ascii/letra-c-minuscula-codigo-ascii-99.html

 */
#include <iostream>
using namespace std;

int main() {
   char c;
   while (cin >> c) {
      cout << int(c) - int('a');
   }
   cout << endl;
}