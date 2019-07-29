#include <iostream>
using namespace std;


int main() {
   bool R[40];
   // rellenar. Primero todo con False
   for (int j=0; j < 40; j++) {
       R[j] = false;
   }
   // Ahora solo algunos con True
   for (int N=0, j=2; N<8; N++) {
       for (int i=0; i<N; i++, j++) {
           R[j] = true;
       }
       j++;
   }

   // mostrar
   for (int k = 0; k < 40; k++) {
      if (R[k]) cout << '*';
      else cout << '-';
   }
}