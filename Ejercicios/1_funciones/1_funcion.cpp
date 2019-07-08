
/* 
        TOTAL DE SEGUNDOS:
Convierte el siguiente programa en una funcion
int main() {
   int h, m, s, T;
   cin >> h >> m >> s;
   T = (h * 60 + m) * 60 + s;
   cout << T << endl;
}
*/
#include <iostream>

using namespace std;


char tiempo(int h,int m,int s){
 int segundos, minutos, horas;
  segundos = (h * 60 + m) * 60 + s; // segundos que tiene hora + min 
  minutos = (h * 60 + m ) + (s/60); // minutos que tiene  hora + segundos
  horas = (m/60) + h + ((s/60) / 60 ); // horas que tiene min + segundos
  cout << "Total de :" << endl
       << "Horas : " << horas << endl
       << "Minutos : " << minutos << endl
       << "Segundos : " << segundos << endl;
}

int main() {
   int h, m, s;
   cout << "inserta el tiempo para hacer la convercion a solo horas, minutos, o segundos" << endl;
   cout << "Horas: "; cin >> h;
   cout << "Minutos: "; cin >> m;
   cout << "Segundos: "; cin >> s;
   cout << endl << tiempo(h,m,s) << endl;
   }

