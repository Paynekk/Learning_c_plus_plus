/*
Determinar si en una secuencia de enteros acabada en -1 
hay elementos consecutivos repetidos
1 2 3 4 5 6 7 8 -1 ---> NO
0 0 2 1 3 4 7 9 -1 ---> SI
 */

#include <iostream>
using namespace std;

int main(){
  bool repetidos = false;
  int n, un; // n = elemento actual, un = elemento anterior
  cin >> un >> n;
  while(n != -1 && un != n){
    un = n;
    cin >> n;
  }
  if(n != -1){
    cout << "Hay elementos consecutivos repetidos" << endl;
  }else {
    cout << "NO hay elementos consecutivos repetidos" << endl;
  }
}