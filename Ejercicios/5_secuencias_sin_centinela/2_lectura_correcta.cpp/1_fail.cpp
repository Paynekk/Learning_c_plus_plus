/*
Fail 
Determina la salida del programa:
para todas las entradas siguientes;
1 x         ->  2 x
2 x x       ->  3 x
0 y         ->  1 y
x 3         ->  0 fail
x x         ->  0 fail
4 5         ->  5 5 
6 7x        ->  7 7x
8 x9        ->  9 x9
*/
#include <iostream>
using namespace std;
int main() {
   int n = 0;
   string s;
   if (cin >> n >> s) {
      n++;        
   } else {
      s = "fail";
   }
   cout << n << " '" << s << "'" << endl;
}