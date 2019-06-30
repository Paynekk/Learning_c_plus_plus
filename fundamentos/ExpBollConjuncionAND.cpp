


#include <iostream>

using namespace std;

int main() {

double x;
cin >> x;
bool r;
bool mayor_que_0 = x > 0.0;
bool menor_que_1 = x < 1.0;
 r = mayor_que_0 && menor_que_1; // Los dos deben ser verdadero o falso
 cout << r << endl;
}
