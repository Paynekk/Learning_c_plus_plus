

#include <iostream>

using namespace std;

/*Existen dos formas de organizar una funcion
En caso de que la funcion este debajo de la funcion principal int main\
simplemente declaramos arriba la funcion para que la funcion principal
se de cuenta que existe la funcion y asi poder ejecutarla por ejemplo:


funcion(x)   declarandola primero para que pueda leer la funcion principal.

int main () {
int x;
cin >> x;
cout << funcion(x) << endl
}

*/




/*Valor absoluto*/
double vabs(double x){
    double v = x;
    if(v < 0.0){
        v = -v; /*Valor absoluto*/
    }else{
cout <<  "No es negativo el numero ";
    }
    return v;
}

int main(){
    double x;
    cout << "Escribe un numero negativo para convertirlo en positivo" << endl;
    cin >> x;
    cout << vabs(x) << endl;

}


