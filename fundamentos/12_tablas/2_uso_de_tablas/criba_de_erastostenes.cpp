
#include <iostream>
using namespace std;

int main(){
  int N, i, j;
  cin >> N;
  bool primo[N]; // tabla indica si un numero es primo
  for(i = 0; i < N; i++){ // declarando todos los camps true
    primo[i] = true;
  }
  for(i = 2; i < N; i++){
    if(primo[i]){
      for(j = 2;i*j < N; j++){
        primo[i*j] = false;
      }
    }
  }
  for(i = 2; i < N; i++){
    if(primo[i]) cout << i << ' ';
  }
  cout << endl;
}
