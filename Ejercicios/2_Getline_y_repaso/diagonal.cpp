/* indica cual es la salida del siguiente programa
 si la entrada es 
 brmaz
uipqxrs
mmnooppq
defgh
o0o0o0o0
*/

#include <iostream>
using namespace std;

int main() {
   string L;
   for (int i = 0; i < 5; i++) { // i es igual a la pocicion de la letra
      getline(cin, L);//recibes una linea de string
      cout << L[i];//a lo que funciona el for, recorre y muestra palabra por palabra 
   }
   cout << endl;
}

