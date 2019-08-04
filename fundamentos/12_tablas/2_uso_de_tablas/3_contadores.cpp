#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ifstream fin("3_contadores.txt");
  char c;
  int cont[26], i;
  for (i = 0; i < 26; i++){ // se inicializa  toda la tabla en 0
    cont[i] = 0;
  }
  fin >> c;
  while (!fin.eof()){ // cuando no sea final del fichero sigue.
    i = int(c) - int('a'); // i es igual a numero ascii  - 97, para colocarlo dentro de la tabla
    cont[i]++; // la pocicion de la tabla del resultado de arriba se suma uno
    fin >> c;
  }
  for(i = 0;i < 26; i++){
    if(cont[i] > 0){
      cout << char(int('a') + i) << " " << cont[i] << endl;
    }
  }

}