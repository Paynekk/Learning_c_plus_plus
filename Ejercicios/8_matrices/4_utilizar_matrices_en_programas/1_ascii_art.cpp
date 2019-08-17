/*
ASCII Art 1

  Se denomina ASCII Art una vertiente artística que resulta de producir imágenes
  a base de combinar caracteres ASCII. Los caracteres se pueden colocar en una matriz 
  (una tabla bidimensional) i mostrar-los por pantalla tal como estan en la matriz.
  Las casillas de la tabla bidimensional son caracteres i por tanto la declaración de la matriz será
   ____________________________________________
  |const int FILAS = 10, COLUMNAS = 20;       |
  |typedef char AsciiArt[COLUMNAS][FILAS];   |
  |_________________________________________|
  Esto declara una tabla de 10 filas y 20 columnas. En el programa siguiente la matriz se rellena con algunos valores
 ____________________________________________________
  int main() {                                      
   AsciiArt A;                                     
   int i, j;                                       

   for (i = 0; i < FILAS; i++) {
      for (j = 0; j < COLUMNAS; j++) {
         A[i][j] = ' ';
      }
   }
   A[1][0] = '<'; A[3][0] = '\\';
   A[0][1] = '_'; A[2][1] = '(';
   A[2][0] = '/'; A[4][0] = '"';
   A[1][1] = '-'; A[3][1] = '_';
   A[0][2] = '_'; A[3][2] = '\\';
   A[4][2] = '"'; A[1][3] = ')';
   A[2][3] = '\\'; A[3][3] = '_';
   A[3][4] = '>';

   muestra_matriz(A);
  }
   __________________________________________
  pero para ver por pantalla el dibujo que representa (es un animal), habría 
  que hacer una acción muestra_imagen que muestre por pantalla los caracteres de la matriz formando la imagen.

  Haz lo siguiente:

    Busca un error en el programa en la parte de inicialización de la matriz.
    Pon el código que inicializa la matriz con espacios en una acción separada que se llame borra_imagen.
    Implementa la acción muestra_imagen.
*/
#include <iostream>
using namespace std;

const int FILAS = 10, COLUMNAS = 20;       
typedef char AsciiArt[FILAS][COLUMNAS];
 void borra_imagen(AsciiArt A){
   for (int i = 0; i < FILAS; i++) {
      for (int j = 0; j < COLUMNAS; j++) {
         A[i][j] = ' ';
      }  
   }
 }
 void muestra_imagen(AsciiArt A){
    
    for(int i=0; i < FILAS; i++){
      for(int j=0; j < COLUMNAS; j++){
        cout << A[i][j]; 
      }
      cout << endl;
    }
 }


int main() {                                      
   AsciiArt A;
   borra_imagen(A);                                     
   A[1][0] = '<'; A[3][0] = '\\';
   A[0][1] = '_'; A[2][1] = '(';
   A[2][0] = '/'; A[4][0] = '"';
   A[1][1] = '-'; A[3][1] = '_';
   A[0][2] = '_'; A[3][2] = '\\';
   A[4][2] = '"'; A[1][3] = ')';
   A[2][3] = '\\'; A[3][3] = '_';
   A[3][4] = '>'; 
   muestra_imagen(A);
}