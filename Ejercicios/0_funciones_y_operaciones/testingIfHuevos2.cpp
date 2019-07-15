
//Haz un programa que lea un entero que representa
//un número de huevos y escriba un mensaje indicando
//el número de cajas necesarias para almacenarlos.
//Cada caja puede contener 6 huevos. Un ejemplo de la entrada/salida seria:
//ejemplo : Numero de huevos? 17
//Para almacenar 17 huevos se necesitan 3 cajas.
// con un if
#include <iostream>

using namespace std;

int main (){
const int espCaja = 6;
int numHuevos = 0, cajas = 0, faltanHuevos = 0, sobranHuevos = 0;

cin >> numHuevos;

cajas = numHuevos/espCaja;
faltanHuevos = numHuevos - espCaja;
sobranHuevos = numHuevos % espCaja;
if ( numHuevos < espCaja ){

cout << "necesitas " << faltanHuevos << "para completar una caja" << endl;

}else{

cout << "para alamacenar " <<  numHuevos << " huevos se necesitan " <<
                     cajas << " caja y sobran " << sobranHuevos << " huevos" <<endl; // agregue el extra de cuantos huevos sobran.

}}
