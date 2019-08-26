/*
Percentil 
Haz un programa que lee una lista de bebés como la siguiente

Nicoleta 5.95
Enric 8.1
Arnau 7.1
Violeta 6.25
Duna 7.85
...
y escribe a la salida el percentil de cada bebé. El percentil de un bebé 
es el porcentaje de bebés (incluyéndolo a él mismo) que tienen un peso igual o menor.
*/
#include <iostream>
#include <fstream>
using namespace std;

struct Percentil{
  string nombre;
   double peso;
};
void leer_fichero(Percentil bebes[], int& tamanyo){
  ifstream F;
  F.open("2_percentil.txt");
  while(F >> bebes[tamanyo].nombre >> bebes[tamanyo].peso){
    tamanyo++;
  }
  F.close();
}

void bebes_percentil(Percentil bebes[], int tamanyo){
  
  for(int i=0;i<tamanyo; i++){
      int conteo=0; double porcentaje;
      cout << bebes[i].nombre << ", percentil: "; 
    for (int j = 0; j < tamanyo; j++){
      if(bebes[j].peso <= bebes[i].peso){
          conteo++;
      }
    }
     porcentaje = conteo*100/tamanyo;
     cout << porcentaje << '%' << endl;

  }
}

int main(){
  Percentil bebes[100]; int tamanyo=0;
  leer_fichero(bebes, tamanyo);
  bebes_percentil(bebes, tamanyo);


  
}