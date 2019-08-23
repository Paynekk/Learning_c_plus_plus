#include <iostream>
using namespace std;
const int MAX_PALABRAS = 50;

struct Frase {
  string palabras [MAX_PALABRAS];
  int npalabras;
};

void mostrar(const Frase& F){
  for(int i=0;i<F.npalabras; i++){
    if(i > 0){
      cout << ' ';
    }
    cout << F.palabras[i];
  }
}