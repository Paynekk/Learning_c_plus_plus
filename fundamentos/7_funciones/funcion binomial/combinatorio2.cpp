

#include <iostream>
using namespace std;

int factorial(int n){
  int n_fact = 1;
  while (n > 1){
    n_fact = n_fact * n;
    n = n - 1;
  }
  return n_fact;
}

int main(){
  int n, k;
  cout << "Entra n y k";
  cin >> n >> k;
  cout << factorial(n) / (factorial(k) * factorial(n - k)) << endl; 
}