/*
haz una lista con los nombres de objetos, clases y métodos que veas.
*/
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string L, a;
    getline(cin, L);
    istringstream S(L);
    ostringstream X;
    S.ignore(5, ' ');
    S >> a;
    X << a << a << endl;
    cout << X.str() << endl;
}

/*
clase
istringstream
ostringstream

objeto
L
a
S
X

metodo
getline()
ignore()
str()
*/
