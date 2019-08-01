#include <iostream>
using namespace std;

typedef int Numeros[100];

int main(){
  Numeros t, s;
  t[0] = 1;
  s[3] = -3;
  cout << t[0] << ' ' << s[3] << endl;
  /*
  otra forma seria la siguiente:
  int t[100], s[100];
   */
}