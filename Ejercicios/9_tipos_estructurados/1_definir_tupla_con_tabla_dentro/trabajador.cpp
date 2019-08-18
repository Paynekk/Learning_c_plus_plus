/*
Trabajador
Define una tupla Trabajador que tenga los datos siguientes:
  ________________________________________
   1- Nombre (un string).
   2- Apellidos (dos strings).
   3- Edad (un entero).
   4- Antigüedad en años (un entero).
   5- Dias libres (una tabla de 7 booleanos, uno para cada día de 
       la semana, donde los días libres estan marcados a true).

 Inicializa un trabajador de nombre "Pedro García López", de 43 años,
 antigüedad de 11 años y con días libres el miércoles y el jueves.
*/

#include <iostream>
using namespace std;
struct Trabajador{
  string nombre, apellido1, apellido2;
  int edad, antiguedad;
  bool semana[7];
};
int main(){
  Trabajador uno;
  uno = {"Pedro","Garcia", "Lopez",43,11,{false,false,true,true,false,false,false}};
  cout << uno.semana[4]; 
}