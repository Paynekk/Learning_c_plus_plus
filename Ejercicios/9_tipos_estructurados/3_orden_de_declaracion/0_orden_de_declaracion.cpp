/*
Embrollo 
Corrige el orden de declaracion de los tipos 
siguientes para que no haya errores de compilación

const int MAXVENTAS = 10000;

typedef Producto TablaProductos[MAXPRODUCTOS];

const int MAXEMPLEADOS = 100;

struct Venta {
   TablaProductos productos;
   int num_productos;
   char modopago;
   int fecha;
   int cajero;
};

typedef Empleado TablaEmpleados[MAXEMPLEADOS];

struct Producto {
    int codigo;
    int cantidad;
    double precio;
};

typedef Venta TablaVentas[MAXVENTAS];

struct Empleado {
   int DNI, codigo;
   string nombre, apellido1, apellido2;
   Fecha nacimiento;
};

const int MAXPRODUCTOS = 80;

struct Fecha {
   int dia, mes, anyo;
};
*/

#include <iostream>
using namespace std;
const int MAXVENTAS = 10000;
const int MAXPRODUCTOS = 80;
const int MAXEMPLEADOS = 100;

struct Fecha {
   int dia, mes, anyo;
};
struct Empleado {
   int DNI, codigo;
   string nombre, apellido1, apellido2;
   Fecha nacimiento;
};

struct Producto {
    int codigo;
    int cantidad;
    double precio;
};
typedef Producto TablaProductos[MAXPRODUCTOS];
typedef Empleado TablaEmpleados[MAXEMPLEADOS];
struct Venta {
   TablaProductos productos;
   int num_productos;
   char modopago;
   int fecha;
   int cajero;
};
typedef Venta TablaVentas[MAXVENTAS];





int main(){

}