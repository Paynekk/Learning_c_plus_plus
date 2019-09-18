#include <iostream>
using namespace std;

int& mayor(int& a, int& b){
  if(a>b){
    return a;
  }else{
    return b;
  }
}
int main(){
  int x,y;
  cin >> x >> y;
  mayor(x,y) = 3;
  cout << x << ' ' << y << endl;
}
/*
la funcion returna el puntero de la variable lo cual se puede modificar 
como en el ejemplo siguiente
*/