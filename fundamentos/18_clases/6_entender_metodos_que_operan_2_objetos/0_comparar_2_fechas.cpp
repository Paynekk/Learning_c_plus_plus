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

    bool igual_que(const Fecha& g) const;
/*---------------------------------------------*/
// por lo regular llevan el nombre como set_day;
    void cambia_dia(int d);// modificador('setter')
    void cambia_mes(int m);// modificador('setter')
    void cambia_anyo(int anyo);// modificador('setter')
    void incrementa(int dias); // modificador(no es un 'setter')
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
// comparando 2 fechas
bool Fecha::igual_que(const Fecha& g) const{//dentro de un metodo puede acceder a atributos
  return (_dia == g._dia && _mes == g._mes && _anyo == g._anyo);
}
/*------------------------------------------------*/
// metodos modificadores
void Fecha::cambia_dia(int d){_dia = d;}
void Fecha::cambia_mes(int m){
  if(m >= 1 && m <= 12){
    _mes = m;
  }else{
    cout << "Error al cambiar el mes" << endl;
  }
}
void Fecha::cambia_anyo(int anyo){_dia = anyo;}

int main(){
  Fecha f(31,12,1995);
  Fecha g(1,2,1996);
 
 // ..

  if(f.igual_que(g)){

  }
}
