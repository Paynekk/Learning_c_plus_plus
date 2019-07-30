/*
INDICES CALCULADOS
 */
#include <iostream>
using namespace std;
int main(){
  /*
Lo más interesante de las tablas, es que como índices no hace 
falta usar índices constantes, se pueden poner variables en los índices.
 Es decir, que es posible hacer esto:
 */
char grupo[2];// se abre grupo con un numero de 2 campos(indice 0,1)
int a = 0;
grupo[a] = 'U'; // indice primero '0'
a++;            // a ahora vale '1'
grupo[a] = '2';// indice segundo '1'
/*_____________________________________________________________________ 
       O también es posible lo siguiente
*/
char grupo1[2];
int a1 = 0;
grupo[a1] = 'U';
grupo[a1+1] = '2'; // dando a la especificacion que a1 vale 0, se suma 1 que es igual a 0+1=1 y entras
                    // en el indice num 1
/*__________________________________________________________________________________________________
    El cálculo de los índices permite automatizar el acceso a las casillas de una tabla, abriendo la puerta a
     poder hacer muchas cosas con pocas instrucciones. Por ejemplo, si declaramos una tabla de 100 reales 
     y queremos rellenar todas las casillas con el valor 0.0, basta con hacer lo siguiente:  */
float reales[100];
for (int i = 0; i < 100; i++) {
   reales[i] = 0.0;
}
/*
Este código, pese a ser muy corto, hace bastante trabajo. Para rellenar 100 variables sin tener tablas habría que hacer algo así:

a1 = 0.0;
a2 = 0.0;
a3 = 0.0;
...
y el programa tendría 100 líneas que hacen lo mismo. Imagina entonces una tabla de 1000 reales y no sólo 100...
*/
}
