#include <iostream>
using namespace std;
int main() {
  int i = 0;
   bool R[40];
   // rellenar
    for (int k = 0; k < 40;k ++){
      if(k % 2 == 0){
         R[k] = true;
      }else{              
         R[k] = false;
      }
    }
   // mostrarC
    for (int k = 0; k < 40; k++) {
      if (R[k]) cout << '*';
      else cout << '-';
   } 
};








