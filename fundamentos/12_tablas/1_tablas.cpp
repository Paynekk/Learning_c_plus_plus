

#include <iostream>
using namespace std;

int main() {
  int a[25]; // indices de 0 a 24
  int i;
  for(i = 0; i < 25; i++) a[i] = i + 1;
  for(i = 0; i < 25; i++){
    cout << a[i] << ' ';
  }
}