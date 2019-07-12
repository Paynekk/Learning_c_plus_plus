#include <iostream>
#include <cmath>
using namespace std;

/*
a = 2, b = 3, c = 1 --> 2 soluciones {x = -0.75 +/- 0.25}
a = 1, b = 2, c = 1 --> 1 solucion {x = -1}
a = 2, b = 1, c = 1 --> no tiene solucion.
*/
void ecuacion_2o_grado(double a, double b, double c,
                      double& x1, double& x2, int& nsol)
// nsol : numero de soluciones
{
double disc = b*b - 4*a*c;
  if(disc == 0.0){
    nsol = 1;
    x1 = -b / (2.0*a);
  }
  else if (disc < 0.0){
    nsol = 0;
  }
  else {
    nsol = 2;
    x1 = (-b + sqrt(disc)) / (2.0*a);
    x2 = (-b - sqrt(disc))/ (2.0*a);
  }
}

int main(){
  double a, b, c;
  cin >> a >> b >> c;
  double s1, s2;
  int ns;
  ecuacion_2o_grado(a, b, c , s1, s2, ns);
  if( ns == 0){
    cout << "No hay soluciones " << endl;
  }else if (ns == 1){
    cout << s1 << endl;
  }else{
    cout << s1 << ' ' << s2 << endl;
  }
}