/*
Más Palabras 
Escribe un programa que lee 2 nombres de fichero, luego cuenta el número de palabras de
cada fichero y muestra por pantalla el nombre del fichero con más palabras.
Por ejemplo, 
si el fichero A.txt contiene
Este fichero tiene 5 palabras

y el fichero B.txt contiene
Este solo 3

si la entrada del programa es

A.txt B.txt

la salida será

A.txt
*/

#include <iostream>
#include <fstream>
using namespace std;
void cuenta_palabras(string fichero,int& num_palabras){

  string palabra;
  ifstream F1(fichero.c_str());
  if(F1.is_open()){
    while(!F1.eof()){
      F1 >> palabra;
      num_palabras++;
    }
  }else{
    cout << "El fichero " << fichero << " no se pudo abrir." << endl;
  }
}
  

void comparando_ficheros(const string& fichero1,const string& fichero2){
int f1_palabras=0, f2_palabras=0;
cuenta_palabras(fichero1, f1_palabras);
cuenta_palabras(fichero2, f2_palabras);
if(f1_palabras > f2_palabras){
  cout << fichero1 << endl;
}else if( f1_palabras == f2_palabras){
cout << "Los ficheros tienen la misma cantidad de palabras" << endl;
}else{
  cout << fichero2 << endl;
}


}




int main(){
  string fichero1, fichero2;
  cin >> fichero1 >> fichero2;
  comparando_ficheros(fichero1,fichero2);
  
  
}
