/*
Calcadas

Suponiendo la declaración de tipo:
typedef int Tabla[26];
____________________________________________
haz una función calcadas con la cabecera:
bool calcadas(const Tabla& t1, const Tabla& t2);
_______________________________________________

que determina si las dos tablas t1 y t2 son iguales (tienen los mismos
 valores en todas las casillas).
 */
#include <iostream>
using namespace std;
typedef int Tabla[26]; 
 
 bool calcadas(const Tabla& t1, const Tabla& t2){
  for(int i=0;i < 26; i++){
     if (t1[i] == t2[i]){
     }else{
       return false;
     }
   }

 }
int main(){
Tabla t1{1,2,3,4,5}, t2{1,2,3,4,5}; bool resp = true;  int numero;
   resp =  calcadas(t1,t2);
   if(resp){
      cout <<  "las tablas son iguales";
   }else{
     cout << "las tablas no son iguales";
   }

 }