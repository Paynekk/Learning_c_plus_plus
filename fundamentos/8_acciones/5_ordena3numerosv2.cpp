

/*
Ordenando 3 numeros de mayo a menor v2 
ejemplo  937 -> 973
*/

#include <iostream>
using namespace std;

void ordena(int &x, int &y)
{
  if (x < y){
    int tmp = x;
    x = y;
    y = tmp;
  }
}

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  ordena(a,b);
  /*  if (a < b){
    int tmp = a;
    a = b;
    b = tmp;
  }  */
  ordena(a,c);
  /*  if (a < c){
    int tmp = a;
    a = c;
    c = tmp;
  } */
ordena (b,c);
  /* if (b < c){
    int tmp = b;
    b = c;
    c = tmp;
  } */
  cout << a << ' ' << b << ' ' << c << endl;
}