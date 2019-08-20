/*
Cuando se declaran estructuras de datos de cierta complejidad,
hay que ponerlas en un orden concreto. Por ejemplo, las dos tuplas siguientes:
_______________________________________________________________________________
typedef Visita Historial[50];

struct Visita {
   string medico;
   Fecha  fecha;
};

struct Fecha {
   int dia, mes, anyo;
};
________________________________________________________________________________
estan en un orden incorrecto porque Fecha se declara más abajo que Visita.
Cuando el compilador, que lee de arriba a abajo, llega a la declaración de Visita,
ve que uno de los campos de Visita es una Fecha, que es un tipo que está aún por definir. 
Lo mismo ocurre con Historial que es una tabla de Visitas y resulta que la 
Visita está definida después del Historial.
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 Para arreglar esto basta con poner el orden siguiente:
*/

#include <iostream>
using namespace std;
struct Fecha {        // Fecha se declara antes que visita
   int dia, mes, anyo;
};

struct Visita { // visita despues de fecha ya que fecha esta dentro de visita
   string medico;
   Fecha  fecha;
};

typedef Visita Historial[50]; // y por ultimo Historial de tipo visita que contiene lo anterior
int main(){

}