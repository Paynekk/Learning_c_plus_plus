/* Poner un Método Consultor 
Supón que tenemos el programa siguiente */

/* Escribe la clase Entero para que el programa escriba un 7.
 Haz sólo los métodos necesarios para conseguirlo. */
#include <iostream>
using namespace std;
class Entero{
public:
Entero(int num);
//consultor
int valor();
private:
int numero;
};

int Entero::valor(){
  return numero;
}
int main() {
   Entero a(7);
   cout << a.valor() << endl;
}

Entero::Entero(int num){
  numero = num;
}
