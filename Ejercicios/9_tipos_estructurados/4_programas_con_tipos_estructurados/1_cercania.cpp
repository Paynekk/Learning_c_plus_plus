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
void poblacion_cercana (Poblacion poblaciones[], int tamanyo, Poblacion po_cercanas[]){
  double distancias, distancia_cercana = abs(poblaciones[0].cordenadaX - poblaciones[2].cordenadaX) + 
                       abs(poblaciones[0].cordenadaY - poblaciones[2].cordenadaY);
  for(int i=0;i<tamanyo; i++){

    for(int j=0;j<tamanyo; j++){
      if( i != j){
          distancias = abs(poblaciones[i].cordenadaX - poblaciones[j].cordenadaX) + 
                       abs(poblaciones[i].cordenadaY - poblaciones[j].cordenadaY);
        if(distancias < distancia_cercana){
          distancia_cercana = distancias;
          po_cercanas[0] = poblaciones[i];
          po_cercanas[1] = poblaciones[j];
        }        
      }
    }
  }
  cout << "Las poblaciones mas cercanas entre si son: " 
       << po_cercanas[0].nombre << " y " << po_cercanas[1].nombre << endl;
}

int main(){
  Poblacion poblaciones[100], po_cercanas[2]; int tamanyo;
  leer_fichero(poblaciones,tamanyo);
  /* mostrar_fichero(poblaciones,tamanyo); */
  poblacion_cercana(poblaciones, tamanyo, po_cercanas);

}