#include <iostream>
using namespace std;


int main(){
  int mes;
  cin >> mes;
  int dias_mes[12] = {
31, 28, 31, 30, 31, 30,
31, 31, 30, 31, 30, 31 };

  
  cout << dias_mes[mes - 1] << endl;
}

/* sin tabla
if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
    dias = 30;
  } else if (mes == 2){
    dias = 28;
  }

 */