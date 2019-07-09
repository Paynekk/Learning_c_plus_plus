#include <iostream>

using namespace std;

void en2digitos(int n){
  if (n < 10) cout << 0;
  cout << n; 
}

void incrementa_hora(int& H, int& M){ // paso por referencia
  M = M + 1;
  if (M >= 60){
    M = 0;
    H = H + 1;
    if (H >= 24)
      H = 0;
  }
}

int main(){
  int h, m;
  char c;
  cin >> h >> c >> m;

  incrementa_hora(h, m); // la variable cambia al igual que en la funcion por el paso por referencia
                          // si no, al momento de este punto seria el mismo valor que se inserto
                          // en el cin
  en2digitos(h);
  cout << ':';
  en2digitos(m);
  cout << endl;
}
