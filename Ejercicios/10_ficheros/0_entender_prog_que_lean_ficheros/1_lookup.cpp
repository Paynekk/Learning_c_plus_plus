/*Determina la salida del siguiente programa
y el fichero A.txt es

I'm living the full catastrophe
y el fichero B.txt es

said catastrophe like I'm Zorba living Greek full the the
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ifstream F("1_A.txt");
   string s, a, b;
   while (F >> s) { // mientras siga leyendo un string el while seguira ejecutandose
                    //el string se guarda en 's'
      ifstream G("1_B.txt");  
      while (G >> a >> b) { // mientras siga leyendo dos strings seguira ejecutandose el while
         if (b == s) {   
            cout << a << ' ';
         }
      }
   }
   cout << endl;
}
// el programa le  un string y lo compara 2 string de abajo asi si este es igual al segundo se muestra
// por pantalla el primero.