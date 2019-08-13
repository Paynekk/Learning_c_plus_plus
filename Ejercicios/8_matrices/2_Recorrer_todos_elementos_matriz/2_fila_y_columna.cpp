/*
 Fila y Columna

Suponiendo la declaración siguiente:

int M[10][20];

escribe código para:

    Llenar la primera fila de la matriz con el valor -1.
    Llenar la última columna de la matriz con el valor 5.
*/

#include <iostream>
using namespace std;
int main(){
    int M[10][20]; int i, j;
  for(i = 0; i < 10;i++){
    for(j = 0; j < 20;j++){
        if(i == 0 && j < 19){
                M[i][j] = -1;
            }else if(j > 18){
                M[i][j] = 5; 
            }else{
                M[i][j] = 0;
            }
        }
    
  }

  for(i = 0; i < 10; i++){
      cout << " [";
        for(j = 0; j < 20; j++){
        if(M[i][j] >= 0){
            cout << " " << M[i][j];
        }else{
            cout << M[i][j];
        }
      }
      cout << "]" << endl;
  } 
}