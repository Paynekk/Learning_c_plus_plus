

/* Cuadrado
Haz un programa que lea 2 números reales que son las
coordenadas x e y de un punto del plano 2D. El programa
debe escribir "dentro" o "fuera" según si el punto se encuentra
dentro o fuera del cuadrado siguiente: y1 - x1 */

#include <iostream>

using namespace std;

int main () {

double const y = 1.0, x = 1.0;
double numX = 0, numY = 0;
cout << "Escribe las cordenadas X" << endl;
cin >> numX;
cout << "Escribe las cordenadas Y" << endl;
cin >> numY;


if (numX < x && numY < y){
cout << "Tus cordenadas estan dentro";
}else{
cout << "tus cordenadas estan fuera";
}}

