/*
Hay Álguien?

Haz una función que cuenta cuantos elementos de una
 matriz de enteros de 20 por 20 son diferentes de 0.
*/


#include <iostream>
using namespace std;
void inicializando(int matriz[][20], int filas){
  int i, j; 
  for(i = 0; i < filas; i++){
    for(j = 0; j < 20; j++){
      matriz[i][j] = 0;
    }
  }
}

void diferenteCero(int matriz[][20], int filas){
 int i, j, k = 0;
  for(i = 0; i < filas; i++){
    for(j = 0; j < 20; j++){
      if(matriz[i][j] != 0){
        k++;
      }
    }
  }
  cout << "Existen " << k << " que no son ceros" << endl;
};


int main (){
  int Matriz[20][20], i, j;
  inicializando(Matriz, 20);
  Matriz[1][2] = 2;
  Matriz[3][4] = 2;
  Matriz[2][1] = 2;
  diferenteCero(Matriz, 20);
}