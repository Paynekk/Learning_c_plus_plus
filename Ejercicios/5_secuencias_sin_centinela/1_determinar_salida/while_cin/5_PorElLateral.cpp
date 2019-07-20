/*
Por el Lateral;

Determina la salida de este programa
si la entrada es la siguiente:

+ -
- you're not
- is free,
+ the customer,
-If something online
+ you're the product.


Dependiendo el - + del inicio de cada linea dependera el orden en el cual sera mostrado
por consola
 */
#include <iostream>
using namespace std;
int main() {
   char p;
   string f, S, a, b;
   cin >> a >> b;
   getline(cin, f);
   while (cin >> p) {
      getline(cin, f);
      if (p == a[0]) {
         S = S + f;
      } else if (p == b[0]){
         S = f + S;
      }
       cout << S << endl;
   }   
} 
