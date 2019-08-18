/* Franja Horaria

Define una tupla Franja que consista en una franja horaria, es decir,
el intervalo de tiempo comprendido entre una hora de inicio y una de final.
Inicio y final deben ser de tipo Hora, a su vez también una tupla.

Haz una prueba rellenando una franja horaria desde las 11:30 hasta las 13:00.
*/
#include <iostream>
using namespace std;
struct Hora{
  int hora, min;
};

struct franjaHoraria{
Hora inicio, final;
};
void suma_horas_min(Hora& hora){
   if(hora.min > 59){
      hora.hora++;
      hora.min = 0;
    }
    
}
void cuenta_min_horas(franjaHoraria franja, Hora& resp){
  resp = {0,0}; 
  while(franja.inicio.hora != franja.final.hora || franja.inicio.min != franja.final.min){
    franja.inicio.min++;
    resp.min++;
      suma_horas_min(franja.inicio);
      suma_horas_min(resp);

  }
};
char ceros_hora(Hora hora){
if(hora.hora < 10){
  cout << 0 << hora.hora << ':';
  }else{
    cout << hora.hora << ':';
  }
  if(hora.min < 10){
    cout << 0 << hora.min;
  }else{
  cout << hora.min;
  }
}
 int main(){
   franjaHoraria franja; Hora resp; char c;
  cout << endl << "El tipo de hora debe de ser  con el formato siguiente:  13:45" 
       << endl << "Escriba la hora de inicio: ";cin >> franja.inicio.hora >> c >>  franja.inicio.min;
  cout << "Escriba la hora final: ";cin >> franja.final.hora >> c >>  franja.final.min;
  cout <<  "la franja entre: " << ceros_hora(franja.inicio) << " y " << ceros_hora(franja.final); 
  cuenta_min_horas(franja,resp);
      cout << "Es de: " << ceros_hora(resp);

  
       
      
 }
