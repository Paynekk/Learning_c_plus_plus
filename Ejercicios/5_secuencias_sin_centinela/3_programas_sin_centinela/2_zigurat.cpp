/*
Zigurat 
Haz un programa que determine si las líneas de la entrada tienen una longitud que
 crece exactamente de uno en uno. Si es así, el programa debe escribir "Zigurat",
  en caso contrario no debe escribir nada. Un ejemplo de "Zigurat" seria
Este
texto
escomo
unapira
mideporq
uecrecede
unoenuno!!
 */
#include <iostream>
using namespace std;
int main(){
  string pal, pal_ant; int numpal = 0, numpal_ant = 0, i = 0;
  bool estado = true;
  cin >> pal_ant;
  while(cin >> pal && estado ){
    numpal_ant = pal_ant.size();
    numpal = pal.size();
    if(numpal_ant == numpal-1){
    cout << "zigurat" << endl;
    }else{
      estado = false;
    }
    pal_ant = pal;
  }
  
  cout << numpal << endl;



}