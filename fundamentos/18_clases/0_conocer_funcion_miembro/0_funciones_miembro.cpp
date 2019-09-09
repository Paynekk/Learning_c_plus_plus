
#include <iostream>
using namespace std;
struct Reloj{
  int h, m;
  void lee();
  void escribe() const;
  void avanza(int minutos);
};

void Reloj::lee(){
  char c;
  cin >> h >> c >> m;
}
void Reloj::escribe() const{
  if(m < 10)
    cout << 0 << h << ':';
  if(m < 10)
  cout << 0 << m;
}
void Reloj::avanza(int minutos){
  if(minutos < 0) return;
  m += minutos;
  if(m > 60){
    h += m/60;  
    m =  m % 60;
    h = h % 24;
  }
}
int main(){
Reloj W;
cout << "Reloj? ";
W.lee();
cout << "Minutos? ";
int n;
cin >> n;
W.avanza(n);
W.escribe();
}