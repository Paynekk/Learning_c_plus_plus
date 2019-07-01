

#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    switch (c){
    case 'a' : case 'e' : case 'i' : case 'o' : case 'u':
        cout << "Vocal" << endl;
        break;
    default:
        cout << "no es vocal" << endl;
     }
}
