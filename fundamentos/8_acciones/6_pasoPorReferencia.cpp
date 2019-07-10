/*
Pasar variable por referencia 
*/

#include <iostream>
using namespace std;

// Funcion normal 
void normal(int n) 
{
  cout << "valor inical:    " << n << endl;
  cout << "Address inicila: " << &n << endl;
  cout << "--------------------------------------" << endl;
  cout << "asignacion de n  = 1 -----> n = 7" << endl;
  n = 7; // cambiamos el valor de la variable que entra
  cout << "--------------------------------------" << endl;
  cout << "valor final:   " << n << endl;
  cout << "Address final: " << &n << endl;
}

// Funcion paso por referencia
void pasoPorReferencia(int &n)
{
  cout << "valor inical:    " << n << endl;
  cout << "Address inicila: " << &n << endl;
  cout << "--------------------------------------" << endl;
  cout << "asignacion de n  = 1 -----> n = 5" << endl;
    n = 5; // cambiamos el valor de la variable que entra
  cout << "--------------------------------------" << endl;
  cout << "valor final:   " << n << endl;
  cout << "Address final: " << &n << endl;
}

int main()
{
  int num = 1;

  /*PRUEBA 1: con funcion normal */
  // Pasamos num, para ver si cambia el valor
  // cout << "\n\nDeclaracion --------------------------" << endl;
  // cout << "Valor:   " << num << endl;
  // cout << "Address: " << &num << endl;
  // cout << "--------------------------------------" << endl << endl;
  // cout << "Entra a la funcion normal" << endl;
  // cout << "--------------------------------------" << endl;
  // normal(num);
  // cout << "--------------------------------------" << endl;
  // cout << "Sale de la funcion normal" << endl << endl;
  // cout << "Valor:   " << num << endl;
  // cout << "Address: " << &num << endl;
  // cout << "--------------------------------------" << endl << endl << endl;

  cout << "\n\nDeclaracion --------------------------" << endl;
  cout << "Valor:   " << num << endl;
  cout << "Address: " << &num << endl;
  cout << "--------------------------------------" << endl << endl;
  cout << "Entra a la funcion pasoPorReferencia" << endl;
  cout << "--------------------------------------" << endl;
  pasoPorReferencia(num);
  cout << "--------------------------------------" << endl;
  cout << "Sale de la funcion pasoPorReferencia" << endl << endl;
  cout << "Valor:   " << num << endl;
  cout << "Address: " << &num << endl;
  cout << "--------------------------------------" << endl;

}