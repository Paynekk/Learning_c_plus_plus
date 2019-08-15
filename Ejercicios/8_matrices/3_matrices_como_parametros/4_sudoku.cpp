/*
 Sudoku

Tenemos la definición siguiente para una matriz que almacena un juego del Sudoku:

typedef int Sudoku[9][9];

En la matriz, cuando hay un 0 se considera que la casilla está vacía.
 El resto de números válidos son del 1 al 9.

Haz tres funciones para:

  1- Comprobar que una fila del sudoku contiene todos los posibles números sin repeticiones.
     La función recibirá la matriz y el índice de la fila que hay que comprobar.
  2-Comprobar lo mismo para las columnas.
  3-Comprobar que una submatriz del sudoku (uno de los bloques de 3 por 3) 
    contiene todos los posibles números distintos.
 */
#include <iostream>
using namespace std;
typedef int Sudoku[9][9];

void iniciar(Sudoku juego){
  int i,j, k = 1;
  for(i = 0; i < 9; i++){
    for(j = 0; j < 9; j++){
      juego[i][j] = k; k++;  
    }
    k++;    
  }
};
void mostrar_juego(Sudoku juego){
  int i,j;
  for(i = 0; i < 9; i++){
    cout << "[ ";
    for(j = 0; j < 9; j++){
       cout << juego[i][j] << " ";
    }
    cout << " ]" << endl;   
  }
};

void comprobar_fila(Sudoku juego, int indice){
  int i,j,k=0;
  for(i=1; i < 10; i++){
    k = 0;
    for(j=0; j < 9; j++){ 
      if(juego[indice][j] > 9 || juego[j][indice] > 9 ){   // valida si es mayor a 9
        cout << "un numero no es valido"  << endl;
        return;
      }else if(juego[indice][j] == 0 || juego[j][indice] == 0){  // valida si es cero es una casiila vacia 
        cout << "existe una casilla vacia " << endl;
        return;
      }else if (juego[indice][j] == i || juego[j][indice] == i){ // valida si existe un numero repetido suma k++
        k++;
        if(k > 1){ // si k es mayor a 1 osea 2 es porque existe dos numeros repetidos dentro de la misma 
          cout << "el numero: " << j << " se repite dos veces" << endl; // 
          return;  
        }
       }
      }
      // k despues del segundo for vale 0 ya que si en el primero no encuentra dos veces el mismo
    }      // numero esto quiere decir que no se repite
    cout << "la fila  y columna esta en orden " << endl;  
  }

/* void submatriz(Sudoku juego){
  int i, j, k =0;
  
    for(j = 0; j < 3; j++){
      
      for(i=0; i < 3; i++){
       cout << juego[j][i] << " "; 
      }

    }
}
 */

int main(){
Sudoku juego; int indice, bloque;
int tabla[8];
iniciar(juego);
mostrar_juego(juego);
cout << "inserta el indice y columna que deseas comprobar"; cin >> indice;
comprobar_fila(juego, indice);
/* cout << "inserta numero de cuadro que deseas  comprobar"; cin >> bloque; */

}
