/*
haz una lista con los nombres de objetos, clases y métodos que aparezcan.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ifstream F;
   F.open("0_fichero.txt");
   if (F.is_open()) {
      string s;
      while (F >> s) {
         s.replace(0, s.size()/2, "_");
         s.append("-");
         cout << s << endl;
      }
   }
   F.close();
}
/*
Clase: 
ifstream
string

objeto
F
s

metodo 
open()
remplace()
close()
*/