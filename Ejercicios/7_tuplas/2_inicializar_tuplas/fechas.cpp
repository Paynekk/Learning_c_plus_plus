/*
Fechas

Dada la tupla Fecha, con la siguiente declaración

struct Fecha {
   int dia, mes, anyo;
};
escribe inicializaciones para las variables siguientes:

    Una fecha wright con el valor inicial 17 de Diciembre de 1903.
    Una fecha titanic con el valor inicial 12 de Abril de 1912.
    Una fecha moon con el valor 21 de Julio de 1969.
 */

#include <iostream>
using namespace std;
struct Fecha{
  int dia, mes, anyo;
};

int main(){
Fecha wright{17,12,1903}, titanic{12,4,1912}, moon{21,6,1969};
}