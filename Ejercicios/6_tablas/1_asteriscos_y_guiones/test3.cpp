
#include <iostream>
using namespace std;
int main() {

bool R[40];
int y, cont;
y = 0;
cont = 1;
// rellenar
for (int k = 0; k < 40; k++) {
    if (k < 3 || k>36)
    {
        R[k] = false;
    }
    else
    {
        while (y < cont)
        {
          cout << "k true" << k <<  endl;
          cout << "cont = " << cont <<  endl;
          cout << "y = " << y <<  endl;

            R[k] = true;
            k++;
            y++;
            

        }
        cout << "k false" <<  k << endl;
        R[k] = false;
        cont++;
        y = 0;
    }
}
// mostrar
for (int k = 0; k < 40; k++) {
    if (R[k]) std::cout << '*';
    else std::cout << '-';
}
}