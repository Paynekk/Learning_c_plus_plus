/*
 Traza
La traza de una matriz se define como la suma de los elementos de la diagonal principal.
Haz una función que devuelve la traza de una matriz de 30 por 30 reales.
*/

#include <iostream>
using namespace std;
void  inicializando(double matriz[][30], int filas){
int i, j, k = 0;
  for(i = 0; i < filas; i++){
   for(j = 0; j < 30; j++){
     matriz[i][j] = k;
    k++;
    }
    k++; 
  }
};
void suma_traza(double matriz[][30], int filas){
  int i, j, traza = 0;
  for(i = 0; i < filas; i++){
      traza +=  matriz[i][i];
  }
  cout << " la traza es: " << traza << endl;
}
void mostrarMatriz(double matriz[][30], int filas){
  int i, j;
  for(i = 0; i < filas; i++){
    cout << "[ ";
    for(j = 0; j < 30; j++){
      if(matriz[i][j] < 10){
        cout << "  " << matriz[i][j] << '-'; 
      }else if(matriz[i][j] > 9 && matriz[i][j] < 100){
        cout << " " << matriz[i][j] << '-';
      }else{
        cout << matriz[i][j] << '-';
      }
    }
    cout << " ]" << endl;
  }
}


int main(){
double matriz[30][30];
inicializando(matriz, 30);
mostrarMatriz(matriz, 30);
suma_traza(matriz, 30);
}