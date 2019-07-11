


#include <iostream>
using namespace std;

// Funcion (por valor)
int suma1(int n){
  return n + 1;
}

// Accion (por referencia)
void incrementa1(int& n){
  n = n + 1;
}

int main(){
int a = 1, b = 2, c;
c = suma1(2);
incrementa1(b);
incrementa1(c);
  cout << c << ' ' << b << endl;
}