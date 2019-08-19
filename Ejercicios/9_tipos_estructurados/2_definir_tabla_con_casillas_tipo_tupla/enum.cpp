

#include <iostream>
using namespace std;
enum DiaSemana{lunes, martes,miercoles, jueves,
                 viernes, sabado,domingo};
// los valores se pueden forzar como en el siguiente enum 'Colores' 
enum Colores{verde = 2, amarillo = 3 , rojo = 7, blanco = 5};

int main(){
  /*
  Una vez declarado un tipo enumerado, tenemos un nuevo tipo, parecido a los enteros, donde una variable puede tomar solamente uno de los valores indicados entre las llaves. Por ejemplo, podemos hacer
  */
DiaSemana a, b;
a = lunes;
b = martes;

cout << "Diasemana 'b' "<< b << endl; // -> 1

//_______________________________
Colores primeros;
primeros = amarillo;
cout << "Colores 'amarillo': " << primeros << endl;
//_______________________________
//En C++, al asignar un enum a un entero, se produce una conversión automática, por ejemplo
int i;
DiaSemana d = miercoles;
i = d; // se convierte 'd' a entero
cout << "i: " << i << endl; 
/* Pero la conversión inversa no es automática, si intentamos hacer

DiaSemana d;
d = 6; error, no se convierte de entero a 'DiaSemana'

el compilador produce un error diciendo que no puede asignar el entero al tipo enumerado. Si realmente se necesita hacer la conversión, se pueden usar los paréntesis
 */
DiaSemana l;
l = DiaSemana(6); // en realidad es 'domingo'
cout << "l: " << l << endl;

}

// fuente: http://www.minidosis.org/#/actividades/Cpp.TiposEstructurados.Enum.doc