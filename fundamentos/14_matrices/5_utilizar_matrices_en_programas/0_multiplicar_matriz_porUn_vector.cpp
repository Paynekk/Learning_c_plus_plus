#include <iostream>
using namespace std;

const int FIL = 3, COL = 4;
typedef float Matriz[FIL][COL];

void muestra_matriz(const Matriz M){
  for(int i=0;i < FIL; i++){
      cout << "[ ";
    for(int j=0;j < COL;j++){
      cout << M[i][j];
    }
    cout << " ]" << endl;
  }
};
void multiplica_matriz_vector(const Matriz M,const float V[COL], float R[FIL]){
    for(int i = 0; i < FIL; i++){
        R[i] = 0.0;
        for(int j = 0; j < COL; j++){ 
          R[i] += M[i][j] * V[j];
        } 
    }
}
int main(){
  Matriz M = {{0,1,0,3},{1,0,0,2},{0,1,0,0}};
  float V[COL] = {1,2,3,4};
  float R[FIL];
  multiplica_matriz_vector(M,V,R);
  cout << R[0] << ' ' << R[1] << ' ' << R[2] << endl;
}














