/*
Leer o No Leer 
Haz un programa que lee un entero y escribe qué valor tiene.
 Si no se puede leer un entero, el programa tiene que escribir

No se ha podido leer un entero. */


#include <iostream>
using namespace std;

int main(){
int entero;
cout << "inserta un entero para imprimirlo por consola: ";
if(cin >>entero){
cout << "el entero que insertase es : " << entero << endl;
}else{
  cout << "NO se ha podido leer un entero" << endl;
}

}