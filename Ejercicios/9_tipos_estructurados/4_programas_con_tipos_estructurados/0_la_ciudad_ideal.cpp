/* La Ciudad Ideal 
Haz un programa que lee una lista de temperaturas y ciudades como

Paris 15.7
Barcelona 23.8
El_Cairo 33.2
Nueva_York 13.8
...

y muestra por pantalla la ciudad que tiene una temperatura más
 cercana a la media de las temperaturas. */
/* struct Ciudad 
{
  string ciudad;
  double temperatura;
}; */
#include <iostream>
#include <fstream>
using namespace std;

struct Ciudad {
  string ciudad;
  double temperatura;
};
void LeeFichero(Ciudad grupo[], int& tamanyo){
  ifstream F;
  F.open("ciudades.txt");
  while(F >> grupo[tamanyo].ciudad >> grupo[tamanyo].temperatura){
    tamanyo++;
  }
  F.close();
   /* tamanyo += 1; */
}
void mostrar(Ciudad grupo[], int tamanyo){
   for(int i = 0;i < tamanyo; i++ ){
   cout << grupo[i].ciudad << " " << grupo[i].temperatura << endl;
  }
}


 void ciudadMedia(Ciudad grupo[], int tamanyo, double& media){  
   int i;
   for(i = 0; i < tamanyo; i++){
     media += grupo[i].temperatura;
   }
   media = media/tamanyo;
 }

 void cerca_media (Ciudad grupo[], int tamanyo, int media){
    double resta, resta_menor = 999; Ciudad cerca_media; 
    
    for (int i = 0; i < tamanyo ; i++){
        resta = grupo[i].temperatura - media;
      if(abs(resta) < abs(resta_menor)){
        cerca_media =  grupo[i];  
        resta_menor = resta;
      }  
    }
cout <<"La media es de " << media  << " y la ciudad mas cerca a la media es: " << endl;
cout << cerca_media.ciudad << " con una temperatura de: " << cerca_media.temperatura << endl;
 }
 
 int main(){
  Ciudad grupo[100], ciudad_media;
  int tamanyo = 0;double media = 0;
  LeeFichero(grupo, tamanyo);
  ciudadMedia(grupo,tamanyo, media);
  cerca_media(grupo,tamanyo,media);
 }