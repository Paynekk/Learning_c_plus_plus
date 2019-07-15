   /*
   Horas, Minutos y Segundos
Haz un programa que lea un entero como 145501 y lo muestre por pantalla
 como si fuera una hora en el formato HHMMSS. El formato de salida debe
  ser 14:55:01, hay que separar con 2 puntos, y cada parte debe tener dos dígitos.
   */

#include <iostream>

using namespace std;

int main (){

int horaCompleta, hora, minutos, segundos;

cin >> horaCompleta;

hora = horaCompleta / 10000;

minutos = (horaCompleta % 10000) / 100;

segundos = horaCompleta % 100;

cout << "Hora: " << hora << ":" << minutos
     << ":" << segundos <<  endl;

}

