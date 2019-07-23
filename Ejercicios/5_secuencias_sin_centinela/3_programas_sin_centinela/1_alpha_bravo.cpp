/*
Alpha Bravo 
Haz un programa que lee una secuencia de palabras donde no hay centinela y dice cuántas 
palabras había en la secuencia. Por ejemplo, si la entrada es

alpha bravo charlie delta echo
la salida será
5
 */

#include <iostream>
using namespace std;
int main(){
  string linea; int pal = 1, num = 0, i;
  
  getline(cin,linea);
  num = linea.size();
  for(i = 0; i != num; i++){
    if(linea[i] == ' '){ 
      pal++;
      
    }
  }
  cout << pal << endl;
}
  


     




  


