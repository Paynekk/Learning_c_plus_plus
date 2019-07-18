/*
Determinar el maximo y el segundo mayor en una secuencia
de enteros positivos acabada en 0 (tenemos 2 o mas)
 */
#include <iostream>
using namespace std;

int main(){
  int n, pri, seg;
  cin >> n;// se le un numero
  pri = n;// y se remplaza por el que sera el primero
  seg = 0;// el segundo se denomina menor que el primero 0
  while (n != 0){// entramos en el while cual la condicion de la secuencia debe terminar en 0
    if(n > pri){// cuando n sea mayor que el primero este sera el segundo y n el primero 
      seg = pri;                          
      pri = n;
    } else if (n > seg){// cuando n sea mayor que el segundo pero no mayor que el primero 
      seg = n;          // seg sera igual a n
    }
    cin >> n;          // se vuelve a leer otro numero hasta que sea 0 
  }
  cout << pri << ' ' << seg << endl; // se imprime el primer mayor y el segundo de la secuencia
}