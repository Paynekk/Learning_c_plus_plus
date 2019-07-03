/*
Escribir por pantalla todos los numero de tres cifras tales que la
suma de las centenas y las decenas sea igual a las unidades

134, 336, 101, 123, 448

100 ... 999
*/

#include <iostream>

using namespace std;

 int main(){
    int i;
    for(i = 100; i <= 999; i++){
        int c, d, u;
        c = i / 100;
        d = (i / 10) % 10;
        u = i % 10;
        if (c + d == u){
            cout << i << ' ';
        }
    }
    cout << endl;
 }
