/*
Cuentalíneas 
Haz un programa que lea el nombre de un fichero y escriba por pantalla el número de líneas que tiene ese fichero. Por ejemplo si el fichero lineas.txt es

L1
L2
L3
L4
y el programa recibe lineas.txt a la entrada, entonces producirá

4
a la salida.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string linea, fichero; int contador=0;
  cin >> fichero;
  ifstream F(fichero.c_str());
  if(F.is_open()){
    while(getline(F, linea)){
      contador++;
    }
      cout << "Existen " << contador << " lineas en el fichero" << endl;
  }else{
    cout << "no existe un fichero con ese nombre" << endl;

  }
}