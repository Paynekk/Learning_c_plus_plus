/*Determinar si una secuencia de caracteres es un palindromo
ejemplo:
alli si maria avisa y asi va a ir a mi silla
 */

#include <iostream>
using namespace std;

int main(){
  char c;
  string frase;
  cin >> c;
  while(c != '.'){
    frase += c;
    cin >> c;
  }
  bool palindromo = true;
  int i = 0, j = frase.size() - 1;
  while(i < j && palindromo){
    if(frase[i] != frase[j]) palindromo = false;
    else{
      i++;
      j--;
    }
  }
  if(palindromo){
    cout << "Es un palindromo" << endl;
  }else{
    cout << "No es un palindromo" << endl;
  }
}