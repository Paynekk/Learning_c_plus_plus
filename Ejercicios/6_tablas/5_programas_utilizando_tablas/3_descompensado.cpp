/*
 Descompensado
Haz un programa que lee una secuencia de reales (acabada en 0.0)
y muestra el tanto por ciento de valores que estan por encima de la media
y por debajo de la media. Por ejemplo, para la secuencia de entrada
           
5.05 4.0 0.99 11.2 13.1 3.3 9.17 0.15 0.12 0.0  
 
la salida será

33.3333% por encima.
66.6667% por debajo.
 */
#include <iostream>
using namespace std;
int main(){
  double secuencia[100], numero, media = 0, arriba_media = 0, abajo_media = 0; int i = 0;
  
  cin >> numero;
  while(numero != 0.0){
    secuencia[i] = numero;
    media += secuencia[i];
    cin >> numero;
    i++;
  }
 media = media/i;
 for(int k = 0; k <= i-1;k++){
   if(secuencia[k] > media){
     arriba_media++;
   }else{
     abajo_media++;
   }
 }
 arriba_media = (arriba_media * 100) / 9;
 abajo_media = (abajo_media * 100) / 9;
 cout << arriba_media << "% por encima." << endl
      << abajo_media << "% por debajo." << endl;
}
