/*
wc -l 
Haz un programa que lee una lista de nombres de fichero y 
muestra por pantalla la suma total de líneas que tienen todos los ficheros.
*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  string tabla[100], linea; int contador=0, lineas_ficheros=0;
  ifstream F1("2_ficheros.txt");
  while(!F1.eof()){
    F1 >> tabla[contador];
    contador++;
  }
  for (int i = 0; i < contador; i++){
    ifstream F2(tabla[i].c_str());
    while(!F2.eof()){
      lineas_ficheros++;
      getline(F2, linea);
    }
  }

cout << "En total existen " << lineas_ficheros << " lineas en los ficheros" << endl;
  
}