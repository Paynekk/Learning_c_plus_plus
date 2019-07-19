
#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ifstream F;
  F.open("texto.txt"); // abriendo fichero
  int n;
  char c;
  while (F >> n >> c){ // condicion si es el typo de dato es true
    cout << n << ' ' << c << endl;
  }
  F.close(); // cerrando fichero
}