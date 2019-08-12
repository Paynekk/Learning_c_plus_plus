/*
 Segmento

Considera el programa siguiente:
______________________________________________________________________
#include <iostream>
using namespace std;

void lee_segmento(int& n, char& c) {
   cin >> n >> c; // el formato es: "15x" o "13*"
}
void escribe_segmento(int& n, char& c) {
   for (int i = 0; i < n; i++) {
      cout << c;
   }
}
int main() {
   int n;
   char c;
   lee_segmento(n, c);
   for (int i = 0; i < 5; i++) {
      escribe_segmento(n, c);
   }
}
_________________________________________________________________________
y modifícalo para que utilice la tupla Segmento siguiente 
sin cambiar en absoluto lo que hace el programa

struct Segmento {
   int n;
   char c;
};


*/

struct Segmento {
   int n;
   char c;
};
#include <iostream>
using namespace std;

void lee_segmento(Segmento& x) {
   cin >> x.n >> x.c; // el formato es: "15x" o "13*"
}

void escribe_segmento(Segmento x) {
   for (int i = 0; i < x.n; i++) {
      cout << x.c;
   }
}

int main() {
   int n;
   char c;
   Segmento x;
   lee_segmento(x);
   for (int i = 0; i < 5; i++) {
  
      escribe_segmento(x);
   }
}
