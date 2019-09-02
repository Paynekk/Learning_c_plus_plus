/*
Calco 
Haz un programa que escriba a la vez por la pantalla y en el fichero copia.txt lo que recibe por la entrada. 
Por ejemplo si la entrada es

a b c d e
1001 1002 1003 1004
--- "xyz" ---
La salida del programa será

a b c d e
1001 1002 1003 1004
--- "xyz" ---
y el contenido del fichero copia.txt será también

a b c d e
1001 1002 1003 1004
--- "xyz" ---
*/

#include <iostream>
#include <fstream>
using namespace std;
int main(){
  string linea;
  ofstream F("texto.txt",ofstream:: app);
  
  while(getline(cin, linea)){
    F << linea << endl;
  }
}