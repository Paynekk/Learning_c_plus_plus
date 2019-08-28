#include <iostream>
#include <fstream>
using namespace std;

int main(){
  //       puede variar el nombre
  ifstream fin("0_leer_un_fichero.txt");
  string nombre;
  int edad;
  fin >> nombre >> edad;
  cout << "tu nombre es: " << nombre 
        << " y tienes " << edad << " anyos" << endl;
  
}