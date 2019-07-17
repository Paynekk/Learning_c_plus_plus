/*
Determinar si en una secuencia de eneteros acabada en 0
hay lagun numero negativo
5 - 2 3 5 7 8 9 7  5 4 3 2 23 40 0
*/


#include <iostream>
using namespace std;

int main() {
  bool encontrado = false;
  int n;
  cin >> n;
  while (n > 0) {
    cin >> n;
  }
  if(n < 0 ) {
    cout << "Hay un numero negativo" << endl;
  }else{
    cout << "NO hay un numero negativo" << endl;
  }
}
