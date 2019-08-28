/*
El método is_open 
El método fstream::is_open permite saber si un fichero se ha podido abrir. Si en un programa intentamos abrir un fichero y éste no existe, podemos detectar que en realidad no se ha abierto con is_open. Un ejemplo puede ser


Detectar si se ha podido abrir un fichero es importante para saber si las lecturas de datos se han podido hacer. Si el fichero no está abierto, ninguna lectura se realizará con éxito.

*/
#include <iostream>
#include <fstream>
using namespace std;
int main() {
   string s;
   ifstream F("2_metodo_is_open.txt");
   if (F.is_open()) {
      cout << "Se ha podido abrir. La primera línea es:" << endl;
      getline(F, s);
      cout << '"' << s << '"' << endl;
   } else {
      cout << "No se ha podido abrir" << endl;
   }
}