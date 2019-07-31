/*
Reversibles 
Haz un programa que reciba una secuencia de palabras acabada en "." 
y muestre las palabras al revés en líneas separadas. Por ejemplo, si la entrada es

Groucho
Chico
Harpo
.

la salida será:

ohcuorG
ocihC
opraH
.
 */

#include <iostream>
using namespace std;
int main(){
  string palabra, palabras;
  char palabra1 = '\n';
  int tamanyo;
  cin >> palabra;
  while(palabra != "."){
    palabras = palabra + palabra1 + palabras;    
    cin >> palabra;
  }
  tamanyo = palabras.size();
  for(int i = tamanyo;i >= 0;i--){
    cout << palabras[i];
  }
  cout << endl;
}