/*
Buen Trabajo 
Haz un programa que lee por la entrada una secuencia de líneas sin centinela en el siguiente formato:

19/02/2013 15 Getline
19/02/2013 10 La acción getline
19/02/2013 15 Acróstico
20/02/2013 32 Puzzle
20/02/2013 40 Temperaturas 1

que representan las actividades que ha hecho un estudiante. Primero hay la fecha,
después los minutos y finalmente el título de la actividad. El separador entre ellos es siempre un solo espacio.

El programa debe escribir, en dos líneas separadas: 1) los minutos que el estudiante ha
dedicado en total; y 2) el título, entre comillas, de la actividad a la que ha dedicado más tiempo.
Con los datos anteriores el programa mostraría:

112
"Temperaturas 1"
*/
#include <iostream>
#include <fstream>
using namespace std;
int main (){
  ifstream F;
F.open("5_buen_trabajo.txt");
  string fecha ,actividad, actividad_mayor;
  int minutos, total_minutos = 0, mayor_minutos = 0, tam_actividad;
  while(F >> fecha >> minutos, getline(F, actividad)){
    total_minutos = minutos + total_minutos;
    if(minutos > mayor_minutos){
      actividad_mayor = actividad;
      actividad_mayor[0] = '"';
      
    }
  }
  F.close();
  cout << total_minutos << endl
       << actividad_mayor << '"' << endl;

}