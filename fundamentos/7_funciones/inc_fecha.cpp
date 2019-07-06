

#include <iostream>
using namespace std;


/*
 1/2/2001 --->  2/2/2001
31/5/2001 --->  1/6/2001
31/12/1492 ---> 1/1/1493
28/2/2000 ---> 29/2/2000
28/2/1900 ---> 1/3/1900
*/

bool es_bisiesto(int anyo){
  return(anyo % 4  == 0 && anyo % 100 != 0 || anyo % 400 == 0);

}


int dias_mes(int mes, int anyo){
  int dias = 31;
  if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
    dias = 30;
  }else if (mes == 2){
    if (es_bisiesto(anyo)){
      dias = 29;
    }else{
      dias = 28;
    }
  }
  return dias;
}

int main(){
int dia, mes , anyo;
char barra;

cin >> dia >> barra >> mes >> barra >> anyo;
dia++;
if (dia > dias_mes(mes, anyo)){
  dia = 1;
  mes++;
    if(mes > 12) {
        mes = 1;
        anyo++;
    }
  }
  cout << dia << '/' << mes << '/' << anyo << endl;
}


