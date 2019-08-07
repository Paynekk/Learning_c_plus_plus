/*
 Misma Identidad
Suponiendo la tupla:

struct Persona {
   string nombre, apellido1, apellido2;
};

haz una función mismo_nombre que reciba dos Personas y devuelva
cierto si coinciden tanto el nombre como los dos apellidos.
 */
#include <iostream>
using namespace std;

struct Persona{
   string nombre, apellido1, apellido2;
};

bool es_igual(Persona p1, Persona p2){
   if(p1.nombre == p2.nombre && p1.apellido1 == p2.apellido1 && p1.apellido2 == p2.apellido2){
      return true;
   }else{
      return false;
   }

}
int main(){
Persona p1, p2;
cout << "Primer nombre de la primera persona: "; cin >> p1.nombre;
cout << "Apellido paterno: "; cin >> p1.apellido1;
cout << "Apellido materno: "; cin >> p1.apellido2;
cout << "Primer nombre de la segunda persona: "; cin >> p2.nombre;
cout << "Apellido paterno: "; cin >> p2.apellido1;
cout << "Apellido materno: "; cin >> p2.apellido2;
if(es_igual(p1,p2)){
   cout << "Los nombres son iguales";
}else{
   cout << "Los nombres no son iguales";
}
cout << endl;
}