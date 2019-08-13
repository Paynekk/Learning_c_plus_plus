/*
Declara una matriz de 3 filas y 4 columnas de caracteres y
pon los valores necesarios para que contenga lo que muestra el dibujo siguiente:

+---+---+---+---+
| X | . | . | X |
+---+---+---+---+
| . | X | X | . |
+---+---+---+---+
| X | . | X | . |
+---+---+---+---+
Haz-lo manualmente, sin utilizar el for (son 12 asignaciones).
*/
#include <iostream>
using namespace std;
int main(){
  char matriz[3][4]; int i,j;
  matriz[0][0] = 'x';matriz[0][1] = '.';matriz[0][2] = '.';matriz[0][3] = 'x';
  matriz[1][0] = '.';matriz[1][1] = 'x';matriz[1][2] = 'x';matriz[1][3] = '.';
  matriz[2][0] = 'x';matriz[2][1] = '.';matriz[2][2] = 'x';matriz[2][3] = '.';

  for(i = 0; i < 3; i++){
    cout << "+---+---+---+---+" << endl << "| ";
    for(j = 0; j < 4; j++){
      cout << matriz[i][j] << " | ";
    }
    cout << endl;
  }
  cout << "+---+---+---+---+" << endl;
}