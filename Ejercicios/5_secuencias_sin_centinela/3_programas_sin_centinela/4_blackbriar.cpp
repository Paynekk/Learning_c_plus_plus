/*
Blackbriar 
Haz un programa que lea una secuencia de palabras y diga cuántas son "Blackbriar". Por ejemplo, si la secuencia es

I don't know what Blackbriar is, I don't grok Blackbriar
la salida será

2
 */
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ifstream F;
  F.open("4_blackbriar.txt");
  
  string palabra; int i = 0;
  while(F >> palabra){
    if(palabra == "Blackbriar"){
      i++;
    }

  }
    F.close();
    cout << "numero de Blackbriar en el texto :" << i << endl;

  }

