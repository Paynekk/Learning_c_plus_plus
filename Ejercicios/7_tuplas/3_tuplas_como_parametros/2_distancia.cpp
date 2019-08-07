/*
Distancia
Suponiendo la tupla

struct Punto3D {
   double x, y, z;
};

haz una función distancia que recibe 2 puntos tridimensionales
y retorna la distancia que hay entre ellos.


Formula  (X2-X1)2 + (Y2 -Y1)2 + (Z2-Z1)2
 2,4,-5 
3,0,-2 
resultado = 26
*/
#include <iostream>
#include <math.h> 
using namespace std;

struct Punto3D{
double x, y, z;

};

double distancia(Punto3D p1,Punto3D p2){
return pow((p2.x - p1.x),2)+pow((p2.y - p1.y),2)+ pow((p2.z - p1.z ),2);
}

int main(){
Punto3D p1, p2;
cout << "inserta el primer punto tridimencional x-y-z: "; cin >> p1.x >> p1.y >> p1.z;
cout << "inserta el segundo punto tridimencional x-y-z: "; cin >> p2.x >> p2.y >> p2.z;
cout << "la distancia entre los dos puntos tridimencionales es: " << distancia(p1,p2) << endl;
};

