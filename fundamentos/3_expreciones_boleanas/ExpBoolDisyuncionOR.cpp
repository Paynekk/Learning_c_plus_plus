

#include <iostream>

using namespace std;

int main () {
double x;
cin >> x;
bool r;

bool mayor_que_1 = x > 1.0;
bool menor_que_0 = x < 0.0;
r = mayor_que_1 || menor_que_0; // basta con que uno sea true para el resultado de true


cout << r << endl;
}
