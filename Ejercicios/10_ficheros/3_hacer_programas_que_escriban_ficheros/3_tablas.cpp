/* Tablas 
Haz un programa que escriba un fichero tablas.txt con las tablas de multiplicar del 1 al 10. El formato de una tabla es el siguiente

Tabla del 2
-----------
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 10 = 20 */

#include <iostream>
#include <fstream>
using namespace std;
int main(){
ofstream F("3_tablas.txt", ofstream::app);

  for (int i = 1; i <= 10; i++){
    F << "Tabla del " << i << endl
      << "------------------------" << endl;
    for (int j = 1; j <= 10; j++){
      F << i << " * " << j << " = " << i*j << endl;
    }
    cout << endl;
  }
}