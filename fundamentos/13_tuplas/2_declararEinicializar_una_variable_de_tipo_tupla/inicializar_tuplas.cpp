#include <iostream>
using namespace std;

struct Fecha{
  int dia, mes, anyo;
};

struct NIF{
  int numero;
  char letra;
};

int main(){
  Fecha a = {1, 5, 1531};
  NIF r;
  r.numero = 12345;
  r.letra = 'P';
  cout << a.dia << '/' << a.mes << '/' << a.anyo << endl;
  cout << r.numero << '-' << r.letra << endl; 
}