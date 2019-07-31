/*
Larga y Corta 
Haz un programa que lee una secuencia de palabras acabada en "." 
y muestra la longitud de la palabra más larga y la más corta.
 */
#include <iostream>
using namespace std;
int main(){
  string palabra,palabra_larga, palabra_corta;
  cin >> palabra;
  palabra_corta = palabra;
  while(palabra != "."){
    if(palabra.size() > palabra_larga.size()){
      palabra_larga = palabra;
    }if(palabra.size() < palabra_corta.size()){
      palabra_corta = palabra;
    }
    cin >> palabra;
  }
  cout << "la palabra mas corta es: " << palabra_corta << 
          " y la llongitud es de: " << palabra_corta.size() << endl
       << "La palabra mas larga es: " << palabra_larga <<
          " y la llongitud es de: " << palabra_larga.size() << endl;
}