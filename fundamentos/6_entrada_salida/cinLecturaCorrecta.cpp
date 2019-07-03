
#include <iostream>

using namespace std;

int main()
{

    int a = -17;
    /*
    cin >> a;
    bool ha_ido_bien = cin;

    if(ha_ido_bien)
    */
    if(cin >> a)
    {
        cout << "Es un entero" << a << endl;
    }
    else
    {
        cout << "No es un entero" << endl;
    }

}
