#include <iostream>
using namespace std;

const int MAX_PALABRAS = 50;

struct Frase{
  string palabras[MAX_PALABRAS];
  int npalabras;
};

void mostrar(const Frase& F){
  for(int i = 0; i < F.npalabras; i++){
   cout << F.palabras[i] << " ";
  }
}
void insertar(Frase& F, int pos,string p ){
  if(pos > F.npalabras){
    pos = F.npalabras;
  }else if(pos < 0){
    pos = 0;
  }
  int i = F.npalabras;
  while(i > pos){
    F.palabras[i] = F.palabras[i-1];
    i--;
  }
  F.palabras[pos] = p;
  F.npalabras++;
}


int main(){
Frase F;
F.npalabras = 0;
insertar(F, 0, "hola");//cuando es 0 el num de palabras es 1
insertar(F, 1, "que");
insertar(F, 2, "tal");
insertar(F, 0, "--");


mostrar(F);
cout << endl;
}