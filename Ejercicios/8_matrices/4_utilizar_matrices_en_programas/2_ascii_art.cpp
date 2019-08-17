/*
 ASCII Art 2

  Si no lo has hecho ya, haz primero ASCII Art 1.

  Se pueden imágenes más impactantes si en vez de tener que rellenar a mano la matriz,
  ésta se puede rellenar desde fichero. El fichero contendrá una secuencia de tripletas
  de enteros acabada en 0 0 0. Los tres enteros son, respectivamente: la fila, la columna,
  i el código ASCII del caracter. Por ejemplo, para el ejercicio anterior la secuencia seria

  1 0 60  2 0 47  3 0 92  4 0 34
  0 1 95  1 1 45  2 1 40  3 1 95
  0 2 95  3 2 92  4 2 34  1 3 41
  2 3 92  3 3 95  3 4 62
  0 0 0

  Modifica el programa de ASCII Art 1 para conseguir lo siguiente:

    Que la matriz sea más grande, de 40 filas y 70 columnas.
    Que el programa lea una secuencia de tripletas como la definida anteriormente y rellene
     la matriz con los valores de la secuencia.

Para probar el programa, utiliza los siguientes datos:

  31 7 43 30 9 40 29 10 95 31 10 41 29 11 40 30 11 56 31 11 47 28 12 39
  30 12 41 27 14 45 27 15 39 30 15 40 26 16 46 29 16 40 31 16 40 24 17 40
  26 17 46 28 17 95 30 17 95 31 17 56 23 18 40 26 18 45 30 18 46 31 18 80
  25 19 40 26 19 46 27 19 40 30 19 97 25 20 96 28 20 96 30 20 80 23 21 40
  24 21 40 25 21 39 26 21 96 29 21 41 30 21 34 20 22 46 22 22 47 23 22 47
  25 22 56 26 22 56 29 22 98 31 22 40 21 23 46 22 23 95 25 23 97 26 23 80
  30 23 95 31 23 56 22 24 96 25 24 46 30 24 97 31 24 56 18 25 46 20 25 40
  22 25 40 23 25 46 25 25 40 28 25 40 29 25 45 18 26 39 19 26 95 21 26 58
  24 26 41 27 26 45 28 26 56 29 26 96 19 27 46 22 27 34 25 27 95 27 27 97
  28 27 80 29 27 46 20 28 96 22 28 97 23 28 39 25 28 40 26 28 41 27 28 98
  28 28 34 30 28 92 17 29 40 19 29 58 20 29 45 21 29 40 24 29 46 27 29 58
  28 29 89 30 29 40 31 29 41 16 30 46 19 30 40 20 30 39 22 30 96 23 30 41
  24 30 56 26 30 96 28 30 97 29 30 41 17 31 40 18 31 47 19 31 46 22 31 97
  23 31 61 24 31 34 30 31 92 16 32 46 17 32 46 20 32 40 22 32 46 23 32 61
  25 32 40 27 32 41 29 32 43 31 32 41 15 33 40 16 33 45 18 33 40 21 33 46
  23 33 39 26 33 41 14 34 46 16 34 39 18 34 95 21 34 97 22 34 41 14 35 45
  19 35 41 20 35 96 21 35 56 22 35 34 24 35 43 30 35 42 14 36 34 17 36 41
  19 36 56 20 36 46 21 36 97 22 36 39 26 36 43 14 37 45 16 37 39 17 37 56
  18 37 41 19 37 80 21 37 41 13 38 96 15 38 124 16 38 46 17 38 58 13 39 46
  12 40 39 19 40 96 20 40 46 10 41 39 11 41 43 6 42 95 7 42 41 8 42 46
  10 42 47 6 43 95 7 43 39 8 43 47 9 43 47 10 43 39 6 44 47 7 44 45
  9 44 46 3 45 45 4 45 92 5 45 47 7 45 46 9 45 39 3 46 45 4 46 47
  8 46 58 3 47 39 5 47 60 7 47 47 8 47 92 9 47 39 2 48 47 4 48 47
  5 48 47 6 48 47 1 49 44 4 49 62 5 49 47 1 50 39 4 50 47 5 50 95
  0 51 44 3 51 47 5 51 92 0 52 58 1 52 124 2 52 58
  0 0 0
*/
#include <iostream>
#include <fstream>
using namespace std;

const int FILAS = 40, COLUMNAS = 70;       
typedef char AsciiArt[FILAS][COLUMNAS];
 void borra_imagen(AsciiArt A){
   for (int i = 0; i < FILAS; i++) {
      for (int j = 0; j < COLUMNAS; j++) {
         A[i][j] = ' ';
      }  
   }
 }
 /*Se pueden imágenes más impactantes si en vez de tener que rellenar a mano la matriz,
  ésta se puede rellenar desde fichero. El fichero contendrá una secuencia de tripletas
  de enteros acabada en 0 0 0. Los tres enteros son, respectivamente: la fila, la columna,
  i el código ASCII del caracter. Por ejemplo, para el ejercicio anterior la secuencia seria */
void lee_secuencia(AsciiArt A){
  int fila, columna, codigoAscii;
  fstream F;
  F.open("2_ascii_art.txt");
  F >> fila >> columna >> codigoAscii;
  cout << "lee primera" << fila;
  while(fila != 0 && columna != 0 && codigoAscii != 0){
  cout << "lee dentro" << fila;

  cout << fila ;
  A[fila][columna] = codigoAscii;

  F >> fila >> columna >> codigoAscii;
}
F.close();

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
   lee_secuencia(A);                                     
   muestra_imagen(A);
}