
#include <iostream>
#include <fstream>
using namespace std;
// numero de argumentos invocada desde la terminal
int main(int argc, char *argv[]){
  if(argc < 2){
    return 0;
  }
  string nombre_fichero = argv[1];// primer argumento se considera nombre del programa
  // por lo cual ponemos 1 ya desde la terminal tendriamos que poner primero el nombre del programa
  // y por segundo pondriamos el argumento osea [1]
ifstream F;
F.open(nombre_fichero.c_str());
string linea;
getline(F, linea);
while(!F.eof()){
  cout << linea << endl;
  getline(F, linea);
}

}