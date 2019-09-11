#include <iostream>
using namespace std;

class Fecha{
public:
  int dia, mes, anyo;// atributos
  void inicia(int d, int m, int a);//metodo
private: 
  void incrementa();// metodo
  /*
  si no esta public, lo que quede fuera de private se
  tomara como publico, public y private no necesariamente
  deben de llebar un orden puede estar primero private y despues public
  junto con los atributos
  */
};

void Fecha::inicia(int d, int m, int a){
  dia = d;
  mes = m;
  anyo = a;
}

void Fecha::incrementa(){
  //no funciona demasiado bien..
  dia++;
}

int main(){
  Fecha f, g;
  f.inicia(10,5,2001);
  g.inicia(21,2,1999);
  
}