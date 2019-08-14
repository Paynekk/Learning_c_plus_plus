/*  Álgebra

Declara una tabla de 10 matrices de 3 por 3 reales.
 */
typedef double Matriz[3][3];



/*inse*/
#include <iostream>
using namespace std;
int main(){
  Matriz tabla[10];
  tabla[0][2][2] = 3.3;
  cout << tabla[0][2][2] << endl;
}

