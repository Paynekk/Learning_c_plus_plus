/*
Mil Primos 
Haz un programa que genere un fichero primos.txt con los 1000 primeros números primos.
*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream F("2_mil_primos.txt", ofstream::app);
  int limite, j =0;
  bool primo = true;
  
  F << 2 << endl;
  for (int i = 2; i <= 1000; i++){

    for (j = 2; j < i ; j++){
    
      if(i % j < 1){
      
        break;
      }else if(j == i-1){
        F << i << endl;
      }
    }
    
  }
}
