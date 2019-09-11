#include <iostream>
using namespace std;

class Fecha{
int dia, mes, anyo;
public:
Fecha(int d, int m, int a);// constructor
// el constructor debe de llamarse igual que la clase y no tiene tipo de retorno
void incrementa();
};

Fecha::Fecha(int d, int m, int a){
  dia = d;
  mes = m;
  anyo = a;
}

void Fecha::incrementa(){
  // No funciona demaciado bien
  dia++;
}

 int main(){
  
   Fecha f(10,5,2001), g(21,2,1999);
   f.incrementa();
   g.incrementa();
 }