

#include <iostream>
#include <fstream>
using namespace std;


int main(){
  //       el nombre puede variar
  ofstream fout("1_escribiendo_en_fichero.txt");
  string nombre;
  cout << "Escribe un nombre: ";
  cin >> nombre;
  fout << "Hola, " << nombre << "!" << endl;
}