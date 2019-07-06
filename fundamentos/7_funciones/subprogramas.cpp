

#include <iostream>

using namespace std;


  // contricante 1
string categoria(double peso){
  string c;
  if(peso < 50.0){
    c = "Ligero";
  }else if(peso < 70.0){
    c = "Medio";
  }else{
    c = "Pesado";
  }
  return c;
}
 

 int main(){
   double peso1, peso2;
   cout << "Ingresa el peso del contricante 1:";
   cin >> peso1;
   cout << "ingresa el peso del contricante 2: ";
   cin >> peso2;
   

   if(categoria(peso1) == categoria(peso2)){
     cout << "Se puede celebrar el combate" << endl;
   }else{
     cout << " no se puede celebrar el combate" << endl;
   }
 }