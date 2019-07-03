#include <iostream>

using namespace std;

// 05:45:59
int main()
{

    int h, m, s;
    char p;

    cin >> h >> p >> m >> p >> s;

// sumas 1 segundo

    s = s + 1;

    if (s == 60)
    {
        s = 0;
        m = m + 1;
        if (m == 60)
        {
            m = 0;
            h = h + 1;
            if (h==24)
            {
                h= 0;
            }
        }
    }

    //Escribir

    if (h < 10) cout << 0;
    cout << h << ":";
    if (m < 10) cout << 0;
    cout << m << ":";
    if (s < 10) cout << 0;
    cout << s << endl;


}
