#include <iostream>
using namespace std;

int main(){
  float X[5];
  int M[5][3], i, j;
  for(i = 0; i < 5; i++){
    for(j = 0; j < 3; j++){
    M[i][j] = 0;
    }
  }
  M[0][3] = 1;    //estos valores no existen ya que nuestra matriz  
  M[0][4] = 2;    // solo llega a [4][2] contando el cero por lo cual si se tiene
  M[0][5] = 3;    // un error puedes llegar a remplazar las variables donde estaban declaradas
  cout << M[1][0] << endl;// en 0 como en el ejemplo de la izq
  cout << M[1][1] << endl;// por lo que las matrices se organizan en linea como si fuera una sola tabla
  cout << M[1][2] << endl;
}
// fuente  del curso y del tema en especifico:  http://www.minidosis.org/#/actividades/Cpp.Matrices.OrganizacionDeMatricesEnMemoria.vid