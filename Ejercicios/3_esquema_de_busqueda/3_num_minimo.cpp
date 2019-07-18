/*
Mínimo 
Haz un programa que lee una secuencia de enteros positivos
 acabada en 0 y escribe el mínimo. Por ejemplo, si la entrada es:
 6 5 7 2 8 9 5 4 7 10 6 9 0
la salida deber ser: 2
 */

#include <iostream>
using namespace std;

int main(){
  int num, num_menor;
  cin  >> num;
  num_menor = num;
    while( num != 0){
      if(num < num_menor){
        num_menor = num;
      }
      cin >> num;
    }
    cout << "el numero menor es: " << num_menor << endl;
}