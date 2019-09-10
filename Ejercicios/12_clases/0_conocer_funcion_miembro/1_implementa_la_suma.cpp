/*
Implementa la Suma 
Dada la tupla

Implementa la función miembro suma, que devuelve la suma de los campos a y b.
 El programa siguiente

debe escribir 5.
*/
#include <iostream>
using namespace std;
struct X {
   int a, b;
   int suma();
};

int X::suma(){
  return a+b;
}

int main() {
   X z;
   z.a = 1;
   z.b = 4;
   cout << z.suma() << endl;
}