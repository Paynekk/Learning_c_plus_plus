/* Apellido 
Declara e implementa la clase Apellido para que el programa siguiente
 */
#include <iostream>

using namespace std;

class Apellido{
string ape;
public:
Apellido();
Apellido(string apellido);
string str();

};

Apellido::Apellido(){
  ape = "esposito";
}
Apellido::Apellido(string apellido){
ape = apellido;
}
string Apellido::str(){
return ape;
}

int main() {
   Apellido a("Garcia"), b("Fernandez"), c("Lopez");
   Apellido x;
   cout << a.str() << ' ' << b.str() << ' ' << c.str() << endl;
   cout << x.str() << endl;
}
/* escriba

Garcia Fernandez Lopez
Esposito 
*/