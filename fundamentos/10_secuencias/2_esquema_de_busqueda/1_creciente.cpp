/*Determinar si una secuencia de enteros positivos acabada en 0
es creciente(estrictamente). la secuencia tiene almenos 2 numeros 
n_ant   n
1       2    3 4 5 5 6 6 7 8 9  10 11  -> no es creciente estrictamente.
*/

#include <iostream>
using namespace std;

int main(){
  int n, n_ant; bool creciente = true;
  cin >> n_ant >> n; 
  while (n != 0){
    if( n <= n_ant){
       creciente = false;
       } 
    //cout << n_ant << ' ' << n << endl;   
    n_ant = n;     
    cin >> n;       
  }
  if (creciente){
    cout << "Es creciente " << endl;
  } else {
    cout << "NO es creciente " << endl;
  }
}