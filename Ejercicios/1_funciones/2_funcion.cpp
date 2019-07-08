/*
Convierte el programa siguiente en un subprograma
int main() {
   int N, c = 0;
   cin >> N;
   if (N == 0) {
      c = 1;
   }
   while (N > 0) {
      c++;
      N = N / 10;
   }
   cout << c << endl;
} 
Buscale un nombre apropiado
*/


#include <iostream>

using namespace std;

int digitos(int num){
  int i;
  for (i = 0;num >= 1 ;i++){
    num = num /10;
  }
  return i;
}
int main() {
  int num ;
  cout << "para saber cuantos digitos tiene un numero inserta el numero: "; cin >> num;
  cout << "tu numero tiene: " << digitos(num) << " digitos." << endl;
}

