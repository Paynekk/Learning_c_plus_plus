/*
Asteriscos y Guiones 
Sin ejecutarlo, trata de averiguar cuál es la salida del siguiente programa

luego cambia la zona comentada con "rellenar", solamente, para producir las siguientes salidas
_________________________________________
1.-| *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
__________________________________________
    
2.-|--**--**--**--**--**--**--**--**--**--**
__________________________________________
3.-| ---*-**-***-****-*****-******-*******---
_________________________________________
 */
#include <iostream>
using namespace std;
int main() {
  int i = 0;
   bool R[40];
   // rellenar
    for (int k = 0; k < 40;k = k ++){
        R[k] = (k >= 20);
    }
   // mostrarC
    for (int k = 0; k < 40; k++) {
      if (R[k]) cout << '*';
      else cout << '-';
   } 
};