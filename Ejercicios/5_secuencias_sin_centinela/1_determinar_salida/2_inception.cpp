/*
Inception 
Determina la salida del siguiente programa
para las siguientes entradas:

1 x x --> 1 1 0
1 2 3 --> 1 1 1
x 2 x --> 0 0 0  c
2 3 x --> 1 1 0
x x x --> 0 0 0
2 x 3 -->  1 1 1
x 2 3 -->  0 0 0
x x 3 -->  0 0 0
 */
#include <iostream>
using namespace std;
int main() {
   int x, m;
   
   string s;
   double d = 2.5;
   cout << " x " << bool(cin >> x) << " --> int es igual a: "<< x << endl;
   cout << " s "<< bool(cin >> s) << " --> string es igual a: "<< s << endl;
   cout << " d "<< bool(cin >> d) << " --> double es igual a: "<< d <<endl;
   cout << d << endl;
   
}