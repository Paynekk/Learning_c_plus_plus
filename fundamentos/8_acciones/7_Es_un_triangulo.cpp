/*
Haz una funcion booleana que indique si tres 
numeros reales pueden corresponder a los lados de
un triangulo (el valor mas grande es mas queuqe;o
que la suma de los otros dos).
 */

#include <iostream>
using namespace std;

void ordena(double&  grande, double& pequenyo){
  if(grande < pequenyo){
    int aux = grande;
    grande = pequenyo;
    pequenyo = aux;
  }
}
bool es_triangulo(double a, double b, double c){
  ordena(a, b);
  ordena(a, c);
  return a < b + c;
}
int main(){
  double x, y, z;
  cin >> x >> y >> z;
  if(es_triangulo(x,y,z)){
    cout << "Es un triangulo" << endl;
}else{
  cout << "No es un triangulo" << endl;
  }
}