/*
ANGULO
  Implementa una clase Angulo que permite representar un ángulo en el intervalo [0, 360).
  La clase debe implementarse de tal manera que el programa siguiente compile correctamente:

  El programa crea 3 ángulos, le suma el ángulo C a B, luego muestra por pantalla los valores de A y B (0 y 112.5),
  y finalmente muestra el ángulo tendido entre A y B (112.5). El valor por defecto de un ángulo debe ser 0, 
  y la resta de ángulos debe devolver el mínimo de los dos ángulos posibles.
*/

#include <iostream>
using namespace std;
class Angulo{
  double _valor;
  public:
/*constructor functions*/
  Angulo();
  Angulo(double valor);
/*functions getters*/
  double valor() const{ return _valor;}//inline
/*    functions     */
  void suma(const Angulo& Ang);
  Angulo resta(const Angulo& Ang);
};
bool comp_angulo(double valor){
   if(valor < 0 || valor > 360){
      cout << "tu valor no es el de un angulo" << endl;
    }else{
      return true;
    }
}
/*constructor functions*/
  Angulo::Angulo(){
    _valor = 0;
  }
  Angulo::Angulo(double valor){
    if(comp_angulo(valor)){
      _valor = valor;
    }
  }
/* functions */
  void Angulo::suma (const Angulo& Ang){
    if(comp_angulo(_valor + Ang._valor)){
      _valor += Ang._valor;
    }
    
  }
  Angulo Angulo::resta(const Angulo& Ang){
    Angulo resultado;
   resultado._valor = abs(_valor -= Ang._valor);
   return resultado;
  }
int main() {
   Angulo a, b(90), c(22.5);
   b.suma(c);
   cout << a.valor() << endl;
   cout << b.valor() << endl;
   c = a.resta(b);
   cout << c.valor() << endl;
}