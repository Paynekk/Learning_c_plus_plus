

/*  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 
3.-|- - - * - * * - * *  *  -  *  *  *  *  -  *  *  *  *  *  -  *  *  *  *  **-*******--- */
  
           
#include <iostream>
using namespace std;
int main() {
   bool R[40];
   
// rellenar
    for (int k =0; k < 40;k++){
       R[k] = false;
    }
    for(int n=0,k=2;n < 8;n++){
       for(int i=0;i < n;i++,k++){
          R[k] = true;
       }
       k++;
    }
   // mostrarC
    for (int k = 0; k < 40; k++) {
      if (R[k]) cout << '*';
      else cout << '-';
   } 
};

