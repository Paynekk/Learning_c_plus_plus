#include <iostream>
using namespace std;
typedef int Matriz[10][10];
void inicializa_matriz(Matriz M, int valor){
  int i, j;
  for(i = 0; i < 10; i++){
    for(j = 0; j < 10; j++){
      M[i][j] = valor;
    }
  }
}
void muestra_matriz(Matriz M){
  int i, j;
  for(i = 0; i < 10; i++){
    cout << "[";
    for(j = 0; j < 10; j++){
      cout << M[i][j] << ' ';
    }
    cout << "]" << endl;
  }
}

void transpon(Matriz M){
  int i, j;
  for(i = 0; i < 9; i++){
    for(j = i + 1;j < 10; j++){
      int aux = M[i][j];
      M[i][j] = M[j][i];
      M[j][i] = aux;
    }
  }
}

int main(){
  Matriz M;
  inicializa_matriz(M,1);
  M[2][3] = 0;
  M[0][7] = 0;
  M[1][9] = 0;
  M[3][7] = 0;
  muestra_matriz(M);
  cout << endl;
  transpon(M);
  muestra_matriz(M);
}