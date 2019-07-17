/*Programa que muestra por pantalla los primeros N
enteros de la secuencia fibonacci
 */

#include <iostream>
using namespace std;

int main(){
  int N, n = 1, ultn = 0;
  cin >> N; // 5 
  cout << ultn << ' '; // << 0
  
    while(N > 0){
      cout << n << ' '; // muestra por pantalla n, que despues de la primer entrada es la suma del 
                         // numero anterior y numero siguiente

      int aux = n + ultn;  //  suma numero anterior  y  numero siguiente
      ultn = n;  //  numero anterior es  ahora el numero siguiente
      n = aux; //  n es la suma del numero anterior y numero siguiente 
      N--; // 4  la secuensia se va a cabando -1 vada vez que pase por aqui
  }
  cout << n << endl;
}