/*
Del Revés
Haz un programa que lea una secuencia de caracteres (acabada en '.')
y una vez leída toda la muestre por pantalla del revés. Por ejemplo, si la entrada del programa es:

abc12QWERTY.

la salida será:

YTREWQ21cba

Haz la suposición de que la secuencia de entrada no tendrá más de 1000 elementos.
 */
#include <iostream>
using namespace std;
int main(){
  char c, secuencia[100];
  int i = 0;
  cin >> c;
  while(c != '.'){
    secuencia[i] = c;
    i++;
    cin >> c;
  }
  for(int k=0; k <= i-1;i--){
    cout << secuencia[i-1];
  }
cout << endl;
}