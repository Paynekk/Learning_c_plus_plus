

#include <iostream>

using namespace std;

int main () {
const int cupos = 7;
int huevos, carpetas, sobrante;
cout << "huevos? ";
cin >> huevos ;

carpetas = huevos/cupos;
sobrante = huevos%cupos;



cout << "Con " << huevos << " huevos "<<" se pueden llenar "
     << carpetas << " carpetas " << " y sobran "
     << sobrante << " huevos " << endl;





}
