
#include <iostream>
using namespace std;

/*
   15 --> 1111
   10 --> 1010
  255 --> 11111111
65535 --> 1111111111111111
 */
int main(){
  int bits[100];
  int N, i = 0, k;
  cin >> N;
  while(N > 0){
    bits[i] = N % 2;
    N = N / 2;
    i++;
  }
  for(k = i - 1;k >= 0;k--){
    cout << bits[k];
  }
  cout << endl;
}