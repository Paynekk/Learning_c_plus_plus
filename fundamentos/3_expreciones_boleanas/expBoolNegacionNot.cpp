

#include <iostream>

using namespace std;


int main() {

double x;
cin >> x;

bool dentro1, dentro2, fuera;

dentro1 = x > 0.0 && x < 1.0;
fuera = x < 0.0 || x > 1.0;
dentro2 = !((x < 0.0) || (x > 1.0)); // o !fuera

cout << dentro1 << " " << fuera << " " << dentro2 << endl;

}
