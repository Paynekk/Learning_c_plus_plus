

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

