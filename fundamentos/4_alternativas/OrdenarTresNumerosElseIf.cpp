/*Escribe por pantalla, de mayor a menor, tres numeros
enteros por el teclado

1 9 4  -> 9 4 1
1 2 3  -> 3 2 1

3 2 1  -> 3 2 1 (a > b > c )
3 1 2  -> 3 2 1 (a > c > b )
2 3 1  -> 3 2 1 (b > a > c )
1 3 2  -> 3 2 1 (b > c > a )
1 2 3  -> 3 2 1 (c > b > a )
2 1 3  -> 3 2 1 (c > a > b )
*/


#include <iostream>\

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    if (a >= b && b >= c)
    {
        cout << a << ' ' << b << ' ' << c << endl;
    }
    else if ( a >= c && c > b )
    {
        cout << a << ' ' << c << ' ' << b << endl;
    }
    else if ( b >= a && a >= c)
    {
        cout << b << ' ' << a << ' ' << c << endl;
    }
    else if (  b >= c && c >= a)
{
    cout << b << ' ' << c << ' ' << a << endl;
}
else if (   c >= a && a >= b)
{
    cout << c << ' ' << a << ' ' << b << endl;
}
else
{
    cout << c << ' ' << b << ' ' << a << endl;
}
}
