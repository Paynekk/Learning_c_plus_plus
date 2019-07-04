


#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream F;
    F.open("texto.txt"); // abriendo fichero
    int n;
    char c;           // declarando un string                           //         int n
    while (F >> n >> c){     //Leyendo fichero "string"                              //   while(cin >> n)  solo numeros true/false
        cout << n << ' ' << c << endl;  // mostrar por pantalla string
    }
    F.close(); // cerrando fichero
}
