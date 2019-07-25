/*
Balance 
Haz un programa que lea por la entrada una secuencia de líneas
 sin centinela en el formato siguiente:
 19/03/2014 + 30000.00 Aportación de capital  
19/03/2014 - 975.00 Fianza alquiler local
20/03/2014 - 1327.50 Instalación eléctrica
21/03/2014 - 3756.79 Compra Proveedores
23/03/2014 + 256.75 Caja 
24/03/2014 + 345.50 Caja
25/03/2014 + 237.50 Caja
25/03/2014 - 546.79 Compra Proveedores
26/03/2014 + 198.80 Caja
27/03/2014 + 396.70 Caja
28/03/2014 + 325.30 Caja
28/03/2014 - 1267.90 Compra Proveedores
29/03/2014 + 216.50 Caja
29/03/2014 - 456.65 Compra Proveedores
19/03/2014 - 975.00 Fianza alquiler local
20/03/2014 - 1327.50 Instalación eléctrica

que representan los ingresos y gastos de un negocio. Primero hay la fecha , después el tipo
 de movimiento (+ para ingresos y - para gastos), luego el importe y al final el concepto.
El programa debe escribir cuál es el balance actual (diferencia entre ingresos y gastos), 
qué día se ha hecho más caja (concepto "Caja") y qué importe era, y qué dia se ha hecho 
la compra de más importe (concepto "Compra Proveedores") y qué importe era.

Para el ejemplo anterior, el programa debe mostrar

Balance: 23646.4
Compra mayor: 3756.79 (21/03/2014)
Caja mayor: 396.7 (27/03/2014)
 */

#include <iostream>
#include <fstream>
using namespace std;
// funcion que da resultado cant total
void cantidad_total(double &cantidad, char operador, double &balance,
                    double &cant_ingreso, double &cant_gasto)
{
  if (operador == '+'){
    balance = balance + cantidad;
    cant_ingreso = cantidad + cant_ingreso;
    cantidad = +cantidad;
  }
  if (operador == '-'){
    balance = balance - cantidad;
    cant_gasto = cant_gasto + cantidad;
    cantidad = -cantidad;
  }
}

void menor_mayor(double cantidad, char operador, string concepto, string fecha,
                 double &mayor_ingreso, double &mayor_gasto, string& conm_gasto, string& conm_ingreso,
                 string& fecha_gasto, string& fecha_ingreso)
{
  if (cantidad > mayor_ingreso){
    mayor_ingreso = cantidad;
    conm_ingreso = concepto;
    fecha_ingreso = fecha;
    
    }
  if (cantidad < mayor_gasto){
    mayor_gasto = cantidad;
    conm_gasto = concepto;
    fecha_gasto = fecha;
  }
};

int main(){
  ifstream F;
  F.open("3_balance.txt");
  double cant_ingreso = 0.0, cant_gasto = 0.0, cantidad = 0.0, balance = 0.0,
         mayor_ingreso = 0.0, mayor_gasto = 0.0;
  char  operador = ' ';
  string concepto = "", conm_gasto, conm_ingreso, fecha, fecha_gasto, fecha_ingreso;

  while (F >> fecha >> operador >> cantidad, getline(F, concepto)){
        
    cantidad_total(cantidad, operador, balance, cant_ingreso, cant_gasto);
    menor_mayor( cantidad,  operador,  concepto,fecha ,mayor_ingreso,
                  mayor_gasto,conm_gasto,conm_ingreso, fecha_gasto, fecha_ingreso);   
  }
  F.close();
  cout << "Total ingreso: " << cant_ingreso << " . Total de gasto: " << cant_gasto << endl
       << "Balance total: " << balance << endl
       << "Gasto  mayor: " << mayor_gasto << " . Concepto: " << conm_gasto << " . Fecha: " << fecha_gasto << endl
       << "ingreso mayor: " << mayor_ingreso << " . Concepto: " << conm_ingreso << " . Fecha: " << fecha_ingreso << endl;
}