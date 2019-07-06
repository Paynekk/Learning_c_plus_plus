

#include <iostream>

using namespace std;

double pot (double x, int n){
  int i;
  double p = 1.0;
  for(i = 0; i < n; i++){
      p = p * x;
  }
  return p;
}

int main(){
  double a, b;
  cin >> a >> b;
  cout << pot(a, 2) + pot(b, 2) << endl;
}

