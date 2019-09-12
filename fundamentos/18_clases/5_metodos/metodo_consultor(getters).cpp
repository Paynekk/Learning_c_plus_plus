#include <iostream>
using namespace std;


class Fecha{
  int _dia, _mes, _anyo;// atributos
  public:
    Fecha(); // por defecto
    Fecha(int d, int m, int anyo); // "normal"
    Fecha (const Fecha& f);// de copia

    int dia() const;// consultor('getter')
    int mes() const;// consultor('getter')
    int anyo() const;// consultor('getter')
};

Fecha::Fecha(){
  _dia = 1;
  _mes = 1;
  _anyo = 2000;
}

Fecha::Fecha(int d, int m, int a){
  _dia = d;
  _mes = m;
  _anyo = a;
}

Fecha::Fecha(const Fecha& F){
  _dia = F._dia;
  _mes = F._mes;
  _anyo = F._anyo;
}
// Metodos Consultores
int Fecha::dia() const {return _dia;}
int Fecha::mes() const {return _mes;}
int Fecha::anyo() const {return _anyo;}





int main(){
  Fecha a;
  Fecha b(5,12,1995);
  Fecha c(b);

  cout << a.dia();
}
