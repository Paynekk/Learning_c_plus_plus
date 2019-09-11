#include <iostream>
using namespace std;

class Fecha{
int dia, mes, anyo;
public:
Fecha(); //  constructor por defecto
Fecha(int d, int m, int a);// constructor
Fecha(const Fecha& F);// constructor copia------------------------
// el constructor debe de llamarse igual que la clase y no tiene tipo de retorno
void incrementa();
};
Fecha::Fecha(){
  dia = 1;
  mes = 1;
  anyo = 0;
}
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
  
   Fecha f(10,5,2001), g(21,2,1999), h;// h creo una fecha llamando al constructor por defecto
   // Fecha h() ./ existe una funcion h que devuelve una fecha
   
   Fecha k = f;// constructor de copia (v1)
   Fecha k2(f);// constructor de copia (v2s)
   f.incrementa();
   g.incrementa();
   h.incrementa();
 }