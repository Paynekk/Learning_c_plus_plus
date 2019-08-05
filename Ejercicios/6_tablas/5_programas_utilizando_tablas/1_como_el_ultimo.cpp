/*
 Como el Último
 Haz un programa que lee una secuencia de enteros acabada en -1
 y cuenta cuantos elementos de la secuencia son iguales que el último (incluido él mismo).
 Por ejemplo, si la entrada es

    5 0 2 6 9 0 7 4 3 0 -1

la salida será:

  3
 */
#include <iostream>
using namespace std;
int main(){
  int secuencia[100], numero, i = 0, cont = 0;
cin >> numero;
while(numero != -1){
secuencia[i] = numero;

cin >> numero;
i++;
}
for(int k = 0;k <= i-1;k++){
  if(secuencia[k] == secuencia[i-1]){
    cont++;
  }
}
cout << cont << endl;
}

