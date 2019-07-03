#include <iostream>

using namespace std;

int main()
{
    double x, y;
    char op;

    cin >> x >> op >> y;
    if(op == '+')
    {
        cout << x + y << endl;
    }
    else if (op == '-')
    {
        cout << x - y <<endl;
    }
    else
    {
        cout << "No conozco el operador" << op << endl;
    }
}
