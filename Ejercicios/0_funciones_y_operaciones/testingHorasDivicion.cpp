/*
Horas
Haz un programa que lee un número de segundos
 y dice cuántas horas enteras contienen.
  Por ejemplo, 7354 segundos contienen 2 horas enteras.
*/

#include <iostream>

using namespace std;

int main () {
int const EnteroMinHor = 60;
int segundos = 7354, horas = 0;

horas = segundos/EnteroMinHor/EnteroMinHor;

cout << segundos << " segundos contienen " << horas << " horas enteras"<< endl;
}
