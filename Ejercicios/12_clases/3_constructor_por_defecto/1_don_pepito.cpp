/* Don Pepito 
Suponiendo que tienes la clase */
#include <iostream>
using namespace std;

class Saludo {
   string _quien;
public:
   Saludo();
   Saludo(string q);
};

Saludo::Saludo() {
   cout << "Hola que tal!" << endl;
}

Saludo::Saludo(string q) {
   _quien = q;
   cout << "Hola que tal, " << q << "!" << endl;
}
int main(){
  Saludo saludando("Don pepito"); 
}
/* 
escribe un programa que muestre por pantalla 

Hola que tal!
Hola que tal, Don Pepito!

sin utilizar cout en absoluto.
 */