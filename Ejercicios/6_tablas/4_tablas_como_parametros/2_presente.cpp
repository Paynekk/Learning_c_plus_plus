/*
Presente 

Suponiendo la declaración de tipo:
typedef int Lista[1000];
____________________________________________________
haz una función presente con la cabecera
bool presente(int x, const Lista& L);

que devuelve true si el valor x se encuentra en la tabla L y false en caso contrario.
 */
#include <iostream>
using namespace std;
typedef int Lista[1000];

bool presente(int x, const Lista& L){
    for(int i=0;i<1000;i++){
      if(L[i] == x){
        cout << "se encontro" << endl;
        return true;
      }else if(i == 999 && L[i] != x){
        return false;
      }
    }
  }

int main(){
  Lista F; bool resp; int x;
  for(int i=0;i<1000;i++){
   F[i] = i; 
  }
  cin >> x;
  resp = presente(x,F);
  cout << "bool: " << resp << endl;
  if(resp){
    cout << "se ha encontrado el valor dentro de la tabla" << endl;
  }else{
    cout << "'No' se ha encontrado el valor  dentro de la tabla" << endl;
  }

}