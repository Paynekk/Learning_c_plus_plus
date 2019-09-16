#include <iostream>
using namespace std;


class Fecha{
  int _dia, _mes, _anyo;// atributos
  public:
    Fecha(); // por defecto
    Fecha(int d, int m, int anyo); // "normal"
    Fecha (const Fecha& f);// de copia

    int dia() const {return _dia;}// EL METODO SE IMPLEMENTA DENTRO DE LA DECLARACION CLASS ES UN METODO INLINE
    int mes() const;// consultor('getter')
    int anyo() const;// consultor('getter')

    bool igual_que(const Fecha& g) const;
/*---------------------------------------------*/
// por lo regular llevan el nombre como set_day;
    void cambia_dia(int d);// modificador('setter')
    void cambia_mes(int m);// modificador('setter')
    void cambia_anyo(int anyo);// modificador('setter')

    void incrementa_dia(); // modificador(no es un 'setter')
    int dias_mes(int mes, int anyo);
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

bool es_bisiesto(int anyo){
  return(anyo % 4  == 0 && anyo % 100 != 0 || anyo % 400 == 0);

}
int Fecha::dias_mes(int mes, int anyo){
  int _dias = 31;
  if(_mes == 4 || _mes == 6 || _mes == 9 || _mes == 11){
  _dias = 30;
  }else if (_mes == 2){
    if (es_bisiesto(anyo)){
    _dias = 29;
    }else{
    _dias = 28;
    }
  }
  return _dias;
}
Fecha::Fecha(const Fecha& F){
  _dia = F._dia;
  _mes = F._mes;
  _anyo = F._anyo;
}
// Metodos Consultores

inline int Fecha::mes() const {return _mes;}// METODO 1 INLINE!
inline int Fecha::anyo() const {return _anyo;}
// comparando 2 fechas
bool Fecha::igual_que(const Fecha& g) const{//dentro de un metodo puede acceder a atributos
  return (_dia == g._dia && _mes == g._mes && _anyo == g._anyo);
}
/*------------------------------------------------*/
// metodos modificadores
inline void Fecha::cambia_dia(int d){_dia = d;}
inline void Fecha::cambia_mes(int m){
  if(m >= 1 && m <= 12){
    _mes = m;
  }else{
    cout << "Error al cambiar el mes" << endl;
  }
}
inline void Fecha::cambia_anyo(int anyo){_dia = anyo;}

void Fecha::incrementa_dia(){
_dia++;
if (_dia > dias_mes(_mes, _anyo)){
  _dia = 1;
 _mes++;
    if(_mes > 12) {
        _mes = 1;
        _anyo++;
    }
  }
} //adelantar unos dias

int main(){
  Fecha f(31,10,1995);
 cout << f.dia() << endl;
 f.cambia_dia(4); // f._dia = 4
  
}
// NO es una llamada normal de una funcion si no
// que  incrusta el codigo de la funcion en donde se ejecuta