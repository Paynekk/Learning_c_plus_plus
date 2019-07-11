

#include <iostream>

using namespace std;

double f_cuadrado(double x){
  return x * x; //                                   1.-FUNCION se retorna el resultado 
}
void a_cuadrado(double x, double& resultado){ //     1 .- ACCION Puntero en la variable resultado
  resultado = x * x; //                              2.- ACCION  guarda el resultado en la variable resultado
}
int main(){
  double r, f_receptor, a_receptor; //     2.-FUNCION: se crea la variable  2.- ACCION se crea la variable  
  cin >> r; //                              variable que obtendra  el numero de entrada

  f_receptor = f_cuadrado(r);//          3.- FUNCION la variable creada guarda el retorno de su funcion 
  cout << f_receptor << endl; //         4.- FUNCION muestras la variable que guardo el retorno de la funcion 

  a_cuadrado(r, a_receptor);//           3.- ACCION el resultado de la funcion  es guardada  en la variable a_receptor que contienen la misma referencia
  cout << a_receptor << endl;//          4.-  ACCION  muestras el valor del resultado a referencia 
}