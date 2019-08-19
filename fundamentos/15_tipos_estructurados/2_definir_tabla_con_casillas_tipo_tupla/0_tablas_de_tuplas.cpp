#include <iostream>
using namespace std;
struct Fecha {
  int dia, mes, anyo;
};
int main(){
  Fecha TablaFechas[50];
  //se puede acceder de esta manera:
  TablaFechas[3].mes = 233;
  TablaFechas[2].mes = TablaFechas[3].mes;

  cout << TablaFechas[2].mes << endl;
}