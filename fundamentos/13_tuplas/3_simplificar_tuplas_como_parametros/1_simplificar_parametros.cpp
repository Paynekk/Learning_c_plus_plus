#include <iostream>
using namespace std;
struct Fecha{
  int dia, mes, anyo;
};

bool es_anterior(Fecha f1, Fecha f2){
  if(f1.anyo != f2.anyo){
    return f1.anyo < f2.anyo;
  }else if(f1.mes != f2.mes){
    return f1.mes < f2.mes;
  }else{
    return f1.dia < f2.dia;
  }
}


int main(){
  Fecha x,y;
  char c;
  cout << "Fecha 1? "; cin >> x.dia >> c >> x.mes >> c >> x.anyo;
  cout << "Fecha 2? "; cin >> y.dia >> c >> y.mes >> c >> y.anyo;

  if(es_anterior(x,y)){
    cout << "La fecha 1 es anterior" << endl;
  }else{
    cout << "La fecha 2 es anterior" << endl;
  }
}

/*
-----------------------------------------------SIN TUPLAS: ---------------------------------------------

#include <iostream>
using namespace std;

bool es_anterior(int dia1, int mes1, int anyo1,
                  int dia2, int mes2, int anyo2){
  if(anyo1 != anyo2){
    return anyo1 < anyo2;
  }else if(mes1 != mes2){
    return mes1 < mes2;
  }else{
    return dia1 < dia2;
  }
}

int main(){
  int dia1, mes1, anyo1, dia2, mes2, anyo2;
  char c;
  cout << "Fecha 1? "; cin >> dia1 >> c >> mes1 >> c >> anyo1;
  cout << "Fecha 2? "; cin >> dia2 >> c >> mes2 >> c >> anyo2;

  if(es_anterior(dia1, mes1, anyo1, dia2, mes2, anyo2)){
    cout << "La fecha 1 es anterior" << endl;
  }else{
    cout << "La fecha 2 es anterior" << endl;
  }
}
 */