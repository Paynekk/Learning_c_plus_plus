
/*
Tr 
Teniendo en cuenta que el fichero input.txt contiene

The reports of my death have
been greatly exaggerateda
escribe la salida del programa siguiente


si la entrada es

aeiouy
*/
#include <iostream>
#include <fstream>
using namespace std;

string rm(string s, char c) {
   int i = 0;
   while (i < s.size()) {// si es menor al tamaño del string pasa
      if (s[i] == c) { // si la letra es igual al char 
         s.replace(i, 1, ""); // se remplasa por nada
      } else { 
         i++;// y si no i++ para seguir con la siguiente letra del string
      }
   }
   return s;// al terminar se retorna el string modificado
}

int main() {
   string ch, w;
   ifstream F("2_input.txt");
   cin >> ch; // se  lee el caracter que no tendra             o
   while (F >> w) {// leera hasta que ya no tenga que leer(letra por letra)
      for (int i = 0; i < ch.size(); i++) {// el tamaño de letra es el numero de iteraciones
         cout << i << " " << w << endl;
         w = rm(w, ch[i]);// primera iteracion es la primera letra que quitara la de un string
         // y lo que retorne sera el string modificado
         
      }
      cout << w << ' ';// despues del for y antes de leer la segundo string del fichero
      // se muestra por pantalla el string modificado
   }
   cout << endl;
}