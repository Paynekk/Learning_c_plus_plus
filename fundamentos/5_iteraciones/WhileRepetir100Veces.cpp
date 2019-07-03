

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream F("pizarra.txt");
    int i = 1;
    while (i <= 100){
        F << "Siempre entregare los deberes a tiempo" << endl;
        i = i + 1;  /*incrementa i en 1*/
    }
}
