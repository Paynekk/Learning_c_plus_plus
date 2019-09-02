/*
Multiplexa 
Describe qué ficheros escribe (y cuál es su contenido) para el programa siguiente

si la entrada es

tienes que estar atento, sí.
paja ,mucha paja ,muchísima paja.
abc ABCDEFGHI
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
   int N = 1;
   string p, f;
   while (cin >> p) {
      getline(cin, f);
      p += ".txt";
      ofstream F(p.c_str());
      for (int k = 0; k < N; k++) {
         F << k << ":" << f << endl;
      }
      N++;
   }
}
// el primer string capturado sea el nombre del fichero y el resto de la linea sera lo impreso en el fichero