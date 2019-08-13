#include <iostream>
using namespace std;

typedef int Tablero[8][8];

void muestra_tablero(Tablero T){
  int i,j;
  for(i = 0; i < 8; i++){
    for(j = 0; j < 8; j++){
      cout << T[i][j];
    }
    cout << endl;
  }
}

void rellena_ajedrez(Tablero T){
  int i,j;
  for(i = 0; i < 8; i++){
    for(j = 0; j < 8; j++){
      T[i][j] = (i + j) % 2; // alrevez seria con -1 antes de la suma
    }
  }
}

int main(){
  Tablero T;
  rellena_ajedrez(T);
  muestra_tablero(T);
}