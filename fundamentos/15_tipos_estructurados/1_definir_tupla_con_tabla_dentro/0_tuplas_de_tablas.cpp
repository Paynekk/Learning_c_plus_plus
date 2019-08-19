#include <iostream>
using namespace std;

// loteria primitiva --> conbinacion
// compuesta por 6 numeros y un numero complementario

struct CombinacionPrimitiva{
  int numeros[6];
  int complementario;
};

int main(){
  // se puede inicializar de esta manera:
  CombinacionPrimitiva C {{12,15,20,40,33,49},22};
  // y tambien de esta:
  C.numeros[0] = 12;
  C.numeros[3] = 40;
  C.complementario = 22;

}