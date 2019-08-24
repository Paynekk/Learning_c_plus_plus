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
void borrar (Frase& F, int pos){
  if(pos >= F.npalabras){
    pos = F.npalabras-1;
  } else if(pos < 0){
    pos = 0;
  }
  int i = pos;
  while(i < F.npalabras-1){
    F.palabras[i] = F.palabras[i+1];
    i++;    
  }
  F.npalabras--;
}
int main(){
  Frase F = {{"uno","dos","tres","cuatro","cinto"},5};
  borrar(F,2);
  mostrar(F);
  cout << endl;
}