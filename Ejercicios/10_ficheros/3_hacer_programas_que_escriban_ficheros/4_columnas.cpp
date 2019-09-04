/*
C++

Columnas 
Haz un programa que lea un nombre de fichero por la entrada, y separe las 
dos columnas del fichero en dos ficheros distintos (son sufijos _col1 y _col2). 
Por ejemplo, si el contenido de datos.txt es

2014/01/01 5
2014/01/02 3
2014/01/03 7
2014/01/04 0
el programa debe grabar dos ficheros datos_col1.txt y 
datos_col2.txt. En datos_col1.txt debería haber

2014/01/01
2014/01/02
2014/01/03
2014/01/04
y en el fichero datos_col2.txt debería haber

5
3
7
0
*/

#include <iostream>
#include <fstream>
using namespace std;
struct columnas{
string fecha; int numero;
};
void leer_fichero(string nombre, columnas tabla[], int& cont){
  
  nombre += ".txt";
  ifstream F(nombre.c_str());
  while(!F.eof()){
   F >>  tabla[cont].fecha >> tabla[cont].numero;
   cont++;
  }
}
void generar_ficheros(columnas tabla[],const int cont){
  ofstream F1("4_datos_col1.txt"), F2("4_datos_col2.txt");
  for (int i = 0; i < cont; i++){
    F1 << tabla[i].fecha << endl;
    F2 << tabla[i].numero << endl;
  }
}

int main(){
  columnas tabla[100]; string nombre; int cont =0;
  cin >> nombre;
  leer_fichero(nombre, tabla, cont);
  generar_ficheros(tabla, cont);
}