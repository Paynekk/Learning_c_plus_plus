
/* 
Emptiness 
Haz un programa que lee el nombre de un fichero y escribe por
 pantalla el tanto por ciento de líneas vacías que contiene ese fichero.
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(){
int contador = 0;
string F;
cin >> F;
ifstream Fichero(F.c_str());
if(Fichero.is_open()){
  
  string linea;
  getline(Fichero, linea);
  while(!Fichero.eof()){
    if(linea == ""){
      contador++;
    }
       getline(Fichero, linea);
  }
}else{
  cout << endl << "No existe un fichero con ese nombre por lo tanto ";
}
cout << "existen " << contador << " lineas vacias" << endl;


}
