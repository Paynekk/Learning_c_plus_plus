/* 
 Cercanía

Haz un programa que lee una serie de nombres de poblaciones con su posición 
(coordenadas x e y, dos reales) y muestra por pantalla el par de poblaciones que estan más cerca entre sí.
*/
#include <iostream>
#include <fstream>
using namespace std;

struct Poblacion{
  string nombre;
  double cordenadaX, cordenadaY;
};
void leer_fichero(Poblacion poblaciones[],int& tamanyo){
  ifstream F; char c;
  F.open("1_cercania.txt");
  while(F >> poblaciones[tamanyo].nombre >> poblaciones[tamanyo].cordenadaX >> c >> poblaciones[tamanyo].cordenadaY ){
    
    tamanyo++;
  }
  F.close();
}
void mostrar_fichero(Poblacion poblaciones[],int tamanyo){
  for(int i=0;i<tamanyo;i++){
    cout << poblaciones[i].nombre << " " << poblaciones[i].cordenadaX << "," << poblaciones[i].cordenadaY << endl;
  }
}
void poblacion_cercana (Poblacion poblaciones[], int tamanyo){
  double menor_distancia;
  for(int i=0;i<tamanyo; i++){

    for(int j=i+1;j<tamanyo; j++){
     menor_distancia = abs(poblaciones[i].cordenadaX - poblaciones[i].cordenadaX) + 
                       abs(poblaciones[i].cordenadaX - poblaciones[i].cordenadaX);
                       cout << menor_distancia << endl;

    }
  }
}

int main(){
  Poblacion poblaciones[100]; int tamanyo;
  leer_fichero(poblaciones,tamanyo);
  mostrar_fichero(poblaciones,tamanyo);
  poblacion_cercana(poblaciones, tamanyo);

}