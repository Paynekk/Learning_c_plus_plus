/*
 Like the Last 
Haz un programa que lee una secuencia de palabras acabada en "." y cuenta cuantas
 palabras son iguales que la última. Por ejemplo, con la entrada

uno tres dos tres cinco tres ocho uno dos siete tres .
la salida será:
4
 */

#include <iostream>
using namespace std;


void leer_fichero( string palabras[], int& tamanyo){
  
   cin >> palabras[tamanyo];
  while(palabras[tamanyo] !=  "."){
    tamanyo++;
    cin >> palabras[tamanyo];
  }

  
}
void contar_ultimo(string palabras[], int tamanyo){
  int conteo =0;
  for(int i=tamanyo;i >= 0;i--){
    if(palabras[tamanyo-1] == palabras[i]){
      conteo++;
    }
  }
  cout << endl << conteo;
}

int main(){
string palabra[100]; int tamanyo=0;
leer_fichero(palabra, tamanyo);
contar_ultimo(palabra, tamanyo);
}