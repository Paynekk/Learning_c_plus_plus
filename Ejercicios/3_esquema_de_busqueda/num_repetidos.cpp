/*
Repetidos 
Haz un programa que lee una secuencia de enteros acabada en 0 y
 cuenta cuantas veces salen elementos consecutivos repetidos.
  Por ejemplo, si la entrada es:
  1 3 14 5 5 2 6 -4 -5 9 9 8 7 7 6 9 15 3 -1 0
  la salida será:3     
 */

#include <iostream>
using namespace std;

int main()
{

  int i = 0, num_ant, num;

  cin >> num_ant >> num;
  while (num != 0){
    num_ant = num;
    cin >> num;
    if (num_ant == num){
      i++;
    } 
  }
  cout << "Existen " << i << " Elementos consecutivos" << endl;
}