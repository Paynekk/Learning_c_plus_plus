

#include <iostream>
using namespace std;
int main() {
  int i = 0;
   bool R[40];
   // rellenar
    for (int k = 0; k < 40;k = k + 4 ){
      R[k]= false; R[k+1] = false;
      R[k+2]= true; R[k+3] = true;

    }
   // mostrarC
    for (int k = 0; k < 40; k++) {
      if (R[k]) cout << '*';
      else cout << '-';
   } 
};















/* -----------------------
2.-           k = k + 4
      R[k]= false; R[k+1] = false;
      R[k+2]= true; R[k+3] = true;  
 */