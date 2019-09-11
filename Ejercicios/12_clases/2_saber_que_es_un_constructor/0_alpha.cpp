/* Alpha 
Tenemos la clase siguiente
 */
#include <iostream>
using namespace std;
class Alpha {
   int _a;
   char _b;
   bool _c;
public:
   Alpha(int a, char b, bool c);
   void mostra() const;
};

Alpha::Alpha(int a, char b, bool c) {
   _a = a;
   _b = b;
   _c = c;
}

void Alpha::mostra() const {
   cout << _a << ' ' << _b << ' ' << _c << endl;
}
/* 
-------Considera, entonces, el siguiente programa-------
 */
int main() {
   // AQUÍ <== Declaración de variables 'x', 'y' i 'z'
   Alpha x(1,'$',false), y(100,'L',true), z(-45,'K',false);
   x.mostra();
   y.mostra();
   z.mostra();
}
/*
 Escribe la declaración de x, y y z para que el programa produzca la salida
1 $ 0
100 L 1
-45 K 0
 */
