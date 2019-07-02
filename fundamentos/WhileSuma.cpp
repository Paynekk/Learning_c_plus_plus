

#include <iostream>
using namespace std;

/*
Ejemplo de resultado
  111 --> 3
 5492 --> 20
 1000 --> 1
*/

int suma_cifras(int n){
    int suma = 0;
    while (n > 0) {
            suma = suma + (n % 10);
            n = n / 10;
        }
        return suma;
}

int main(){
    int n;
    cin >> n;
    cout << suma_cifras(n)<< endl;
}
