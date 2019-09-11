/* Beta 
Tenemos la tupla siguiente 
using namespace std;
struct Beta {
   string par;
   int num;
};
*/
#include <iostream>
using namespace std;
class Beta {
   string parau; int numer;
  public:
   Beta(string par, int num);
   string paraula() const;
   int numero() const;
};
Beta::Beta(string par, int num){
parau = par;
numer = num;
}
string Beta::paraula() const{
  return parau;
}
int Beta::numero() const{
  return numer;
}
/* y la queremos convertir en clase. Por tanto, mantendremos los atributos pero pondremos nuevos métodos (incluyendo el constructor).

Supón que tenemos el siguiente programa */

int main() {
   Beta x("hola", 25), y("adeu", 30);
   cout << x.paraula() << ' ' << x.numero() << endl;
   cout << y.paraula() << ' ' << y.numero() << endl;
}
/* Escribe la nueva clase Beta que sustituya a la tupla del mismo nombre de tal manera que el programa principal escriba

hola 25
adeu 30
Determina primero qué métodos tendrá la clase Beta y haz declaración e implementación. */