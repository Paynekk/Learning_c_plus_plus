/*
Certeza Absoluta 
Suponiendo la declaración de tipo:

typedef bool Verdad[150];
-------------------------------------
haz una función todos_ciertos que retorna true si en una tabla
 de tipo Verdad todas las casillas tienen el valor true.
  En caso contrario debe retornar false.
  
 */

#include <iostream>
using namespace std;
typedef bool Verdad[150];

bool todos_ciertos(Verdad tabla){
for(int i=0;i<150;i++){
  if(tabla[i] == false){
    return false;
  }else if(i == 149 && tabla[i] == true){
    return true;
  }
}

}

int main(){
  Verdad tabla1; bool resp;
  for(int i=0;i<150;i++){
    tabla1[i] = true;
  }
  resp = todos_ciertos(tabla1);
  if(resp){
    cout << "toda la tabla tiene valor true" << endl;
  }else{
    cout << "en la tabla existe por lo menos un false" << endl;
  }
}