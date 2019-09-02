/*
Divide 
Determina el propósito del siguiente programa y pon almenos un ejemplo de su funcionamiento:

*/
#include <fstream>
#include <iostream>
using namespace std;

int main() {
   ifstream A("0_A.txt");
   ofstream B("0_B.txt");
   ofstream C("C.txt");
   string L;
   int k = 0;
   while (getline(A, L)) {
      if (k % 2 == 0) {
         B << L << endl;
      } else {
         C << L << endl;
      }
      k++;
   }
}
/*
RESPUESTA: el programa le una serie de lineas las cuales una es metida en el fichero b mientras
la siguiente en el fichero c y asi sucesivamente. un claro ejemplo grafico del funcionamiento de este programa seria
el siguiente:
si en el fichero A tenemos en las lineas
0.- primera linea
1.- segunda linea
El programa pondra en un fichero la primera linea y en el otro fichero pondra la segunda linea por al sumar 
k cada vez que sea par lo metera en un fichero mientras cuando sea primo lo metera en otro
0 2 4 6 8 -> numero de lineas que estarian un fichero
1 3 5 7 9 -> numero de lineas que estarian en el otro fichero
*/