/*Programa que muestra por pantalla los primeros N
enteros de la secuencia fibonacci
 */

#include <iostream>
using namespace std;

int main(){
  int N, n = 1, ultn = 0;
  cin >> N;
  cout << ultn << ' ';
  N--;
    while(N > 0){
      cout << n << ' ';

      int aux = n + ultn;
      ultn = n;
      n = aux;
      N--;
  }
  cout << endl;
}