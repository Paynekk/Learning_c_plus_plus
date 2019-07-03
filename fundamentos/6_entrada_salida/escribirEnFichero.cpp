


#include <iostream>
#include <fstream>

using namespace std;

int main() {
ofstream fout("salida.txt"); /*Fichero*/
string nombre;
cout << "Escribe tu nombre: ";
cin >> nombre;
fout << "Hola " << nombre <<  endl; /*Dentro del fichero*/

}
