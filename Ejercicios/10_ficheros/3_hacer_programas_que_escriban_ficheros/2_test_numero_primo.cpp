
#include <iostream>
using namespace std;
int main(){
  int numero;
  bool primo = true;
  cin >> numero;
  
  for (int i = 2; i < numero; i++){
    cout << i << " ";
    if(numero % i == 0){
      primo = false;
    }
  }
  
  if(primo){
    cout << "es un numero primo";
}else{
  cout << "No es un numero primo ";
}
}