/*
Swap 
Determina la salida del programa

para las siguientes secuencias de entrada

1 2 3
8 7 8 0 0 1
0
0 1
5 10 15 20
1111 111 11 1
 */
#include <iostream>
using namespace std;

int main() {
   int n, m = -1;
   while (cin >> n) swap(n, m); // swap cambia las variables  entre si 
   cout << n << m <<  endl;
}