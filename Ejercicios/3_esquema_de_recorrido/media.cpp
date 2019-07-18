/*
Media 
Haz un programa que lee una secuencia de reales acabada en 0.0 y escribe la media. Por ejemplo, si la entrada es:
4.0 -2.3 10.1 6.2 1.9 3.8 0.0
-2.3 1.9 3.8 4.0 6.2 10.1
  1    2   3   4   5  6 
la salida deber ser: 3.95
 */
#include <iostream>
using namespace std;

int main (){
 double suma = 0, num, cant_num = 0;
 cin >> num;
  while(num != 0.0){
    
    num = num + suma;
    suma = num;
    cin >> num;
    cant_num++;
  }
  cout << "La media de la secuencia es de: " << suma/cant_num << endl; 
}

