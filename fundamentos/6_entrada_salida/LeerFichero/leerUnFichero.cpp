

#include <iostream>
#include <fstream>
using namespace std;

int main() {
ifstream fin("datos.txt");

string nombre;
int edad;

fin >> nombre >> edad;
cout << "Tu nombre es "<< nombre
     << " y tienes " << edad << " anyos " << endl;
}
