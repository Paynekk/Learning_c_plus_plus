#include <iostream>
using namespace std;

struct Hora{
int h, m;
};
void lee_hora(Hora& H){
  char c;
  cin >> H.h >> c >> H.m;
}

void incrementa_hora(Hora& H){
  H.m = H.m + 1;
  if(H.m >= 60){
    H.m = 0;
    H.h = H.h + 1;
    if(H.h >= 24){
      H.h = 0;
    }
  }
}

void muestra_hora(Hora H){
  if(H.h < 10) cout << 0 << H.h << ':';
    if(H.m < 10) cout << 0 << H.m;
}

int main(){
  Hora x;
  lee_hora(x);
  incrementa_hora(x);
  muestra_hora(x);
  cout << endl;
}

/*
Sin tuplas quedaria asi:
void lee_hora(int& h, int&m){
  char c;
  cin >> h >> c >> m;
}

void incrementa_hora(int& h, int& m){
  m = m + 1;
  if(m >= 60){
    m = 0;
    h = h + 1;
    if(h >= 24){
      h = 0;
    }
  }
}

void muestra_hora(int h, int m){
  if(h < 10) cout << 0 << h << ':';
    if(m < 10) cout << 0 << m;
}

int main(){
  int h, m;
  lee_hora(h, m);
  incrementa_hora(h, m);
  muestra_hora(h, m);
  cout << endl;
}
 */