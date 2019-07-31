/*
C++

Tituliza 
Haz un programa que lee una secuencia de palabras acabada en "." 
y escribe la secuencia cambiando la primera letra de cada palabra a mayúsculas
, excepto en las palabras que tienen una o dos letras. Por ejemplo, si la entrada es:

la bella y graciosa moza marchose a lavar la ropa
-------------------------------------------------
la salida será: 
-------------------------------------------------
La Bella y Graciosa Moza Marchose a Lavar la Ropa
 */
#include <iostream>
using namespace std;
int main(){
string palabra, palabras;
cin >> palabra;
  while(palabra != "."){
    if (palabra.size() > 2 && palabra[0] >= 97 && palabra[0] <= 122){
    palabra[0] = palabra[0]-32;
    }
  palabras = palabras + " " + palabra;
  cin >> palabra;
  }
  cout << palabras << endl;
}