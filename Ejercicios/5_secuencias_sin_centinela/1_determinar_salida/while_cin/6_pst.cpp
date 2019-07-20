/*
Pst 
Escribe el enunciado de un problema cuya solución es el siguiente programa:
1 2 3
1 1 1
1 2 2
10 20
6 4 9 2 4 0 1 8 10
1
También ten en cuenta el caso de que la entrada sea una secuencia vacía.

Respuesta = escribe un problema usando else if para ordenar 3 numeros del mayor al menor
*/
#include <iostream>
using namespace std;
int main() {
   int x, p = -1, s = -1, t = -1;
   while (cin >> x) {//        -->        1          -->    2   --> 1 
      if (p == -1 || x > p) {//--> como es mayor pasa-->  pasa  --> no pasa
         t = s;//                                    --> t = s  -->
          s = p;//                                   --> s = 1  -->
           p = x;//            --> p = 1             --> p = 2  -->
      } else if (s == -1 || x > s) {// no pasa       -->no pasa --> no pasa
         t = s;//                                    -->        --> 
          s = x;//                                   -->        --> 
      } else if (t == -1 || x > t) {//no pasa        -->no pasa --> pasa 
         t = x; //                                   -->        --> t = 1
      }
   }
   cout << p << ' ' << s << ' ' << t << endl;// -----> 2 1  1
}