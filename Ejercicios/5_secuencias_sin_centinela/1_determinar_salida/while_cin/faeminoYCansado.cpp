/*
Faemino y Cansado 
Determina la función de este programa
 */
#include <iostream>
using namespace std;
int main() {  
   float faemino;
   int cansado = 0;
   while (cin >> faemino) { // mientras sea un numero flotante pasa  y se repite hasta que no sea un float
      if (faemino > 0.0 && faemino < 10.0) { // si el numero flotante es mayor que 0
         cansado++;//                         y menor que 10, cansado sumara uno 
      }
   }
   cout << cansado << endl;
}