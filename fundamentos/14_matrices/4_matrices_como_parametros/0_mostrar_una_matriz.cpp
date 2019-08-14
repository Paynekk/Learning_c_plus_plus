#include <iostream>
using namespace std;
/*
[ a b ]
[ c d ]
[ e f ]
[ g h ]
*/
// la columna no debe de dejarce en blanco
void muestra_matriz(char M[][2],int filas){  
  int i, j;
  for(i = 0; i < filas; i++){
    cout << "[ ";
    for(j = 0; j < 2; j++){
      cout << M[i][j] << ' ';
    }
    cout << ']' << endl;
  }
}

int main(){
  char M1[4][2] = {{'a','b'},{'c','d'},{'e','f'},{'g','h'}};
  char M2[6][2] = {{'a','b'},{'c','d'},{'e','f'},{'g','h'},{'i','j'},{'k','l'}};
  muestra_matriz(M1,4);
  muestra_matriz(M2,6);
}