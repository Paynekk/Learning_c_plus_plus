

#include <iostream>

using namespace std;
//acciones = funcion  que no retorna nada por ejemplo :
void mensaje (string texto){ // void es una funcion que no retorna nada. al igual puede 
  cout << "El mensaje es: " << texto << endl; // ser funciones comunes que no retornan nada.
}

int main (){
  mensaje("Hola como estas");
  mensaje("Estamos bien.");
}