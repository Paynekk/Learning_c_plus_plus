/*
 Limpieza

Dada la declaración de la matriz:
____________________________________________
struct Vector2D {
   double x, y;
};
____________________________________________
typedef Vector2D CampoVectorial[100][100];
_____________________________________________
haz una acción que pone a (0,0) todos los vectores de una matriz de tipo CampoVectorial.
 */

#include <iostream>
using namespace std;
struct Vector2D{
  double x, y; };
typedef Vector2D CampoVectorial[100][100];

void todosCero(CampoVectorial vector){
  int i, j;
  for(i = 0; i < 100; i++){
    for(j = 0; j < 100; j++){
        vector[i][j].x = 0.0;
        vector[i][j].y = 0.0;
    }
  }

};
void mostrarMatriz(CampoVectorial vector){
  int i, j;
  for(i = 0; i < 100; i++){
      cout << "[ ";
    for(j = 0; j < 100; j++){
      if(j == 49){
        cout << endl << "[ ";
      }else{
        cout <<  vector[i][j].x << vector[i][j].y;
      }
    }
    cout << " ]" << endl;
  }  
}
int main(){
  CampoVectorial Vectores;
  todosCero(Vectores);
  mostrarMatriz(Vectores);

}