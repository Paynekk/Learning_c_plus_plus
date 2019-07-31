

#include <iostream>
using namespace std;

int main(){
  string palabra;
  cout << "palabra: ";
  cin >> palabra;
  int i;
  int tamanyo = palabra.size();
  for(i = tamanyo -1;i >=0; i--){
    cout << palabra[i];
  }
  cout << endl;
}