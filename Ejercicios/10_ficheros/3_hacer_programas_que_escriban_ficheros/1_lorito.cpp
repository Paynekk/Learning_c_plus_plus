/*
Lorito 
Haz una acción graba con la cabecera

void graba(string F, string linea, int N);
que graba un fichero (de nombre F) con N copias de la linea.
*/

#include <iostream>
#include <fstream>
using namespace std;
void graba(string F, string linea, int N){
  ofstream fichero(F.c_str(), ofstream::app);
  for(int i=0; i < N; i++){
    fichero << linea << endl;
  }
}

int main(){
string F, linea; int  copias;
cin >> F >> copias;
getline(cin, linea);
graba(F, linea, copias);
}