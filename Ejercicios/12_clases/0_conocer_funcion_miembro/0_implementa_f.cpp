/*
Implementa f 
Declara una tupla X con un campo a entero y un método f. Implementa f de tal manera que simplemente retorne a.

Por ejemplo, con la tupla X, el programa siguiente debe escribir un 3

int main() {
   X y;
   y.a = 3;
   cout << y.f() << endl;
}
*/

#include <iostream>
using namespace std;

struct X {
  int a;
  int f() const;
};

int X::f()const{
  return a;
}
int main(){
X y;
y.a = 3;
cout << y.f() << endl;
}