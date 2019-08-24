/* La Ciudad Ideal 
Haz un programa que lee una lista de temperaturas y ciudades como

Paris 15.7
Barcelona 23.8
El_Cairo 33.2
Nueva_York 13.8
...
0              1        

 1 2 3 4 5 5 6 
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

void menor_mayor(Ciudad grupo[], int tamanyo){
  
  for(int i = 0; i < tamanyo; i++){

      for(int j = 0; j < tamanyo; j++){
        if (grupo[j].temperatura < grupo[i].temperatura ){
          swap(grupo[i].temperatura, grupo[j].temperatura);
          swap(grupo[i].ciudad, grupo[j].ciudad);
        }
  
      }
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
    double resta = 999, resta_ant; Ciudad cerca_media;
    for (int i = 0; i < tamanyo ; i++){
        cout << "resta: " << resta;
      if(grupo[i].temperatura - media < resta){
        cerca_media =  grupo[i]; 
        resta = media - grupo[i].temperatura;
        cout << "ciudad media"<< cerca_media.ciudad << " " << cerca_media.temperatura << endl; 
      }
    }
    
    
 }
 
 int main(){
  Ciudad grupo[100], ciudad_media;
  int tamanyo = 0;double media = 0;
  LeeFichero(grupo, tamanyo);
  /* menor_mayor(grupo,tamanyo); */
  mostrar(grupo, tamanyo);
  ciudadMedia(grupo,tamanyo, media);
  cout << "media:" << media << endl;
  cerca_media(grupo,tamanyo,media);
 }