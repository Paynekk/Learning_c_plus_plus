/*
Máximo 
Haz un programa que lee una secuencia de enteros positivos acabada 
en 0 y escribe el máximo. Por ejemplo, si la entrada es:
5 6 3 9 2 8 7 5 4 1 11 6 3 2 0
la salida deber ser: 11
 */

#include <iostream>
using namespace std;

int main (){
int num = 0, num_max = 0;
cin >> num;
num_max = num;
while(num != 0){
  if(num > num_max){
    num_max = num; 
  }
  cin >> num;
}
 cout << "el numero maximo es :" << num_max << endl;
}