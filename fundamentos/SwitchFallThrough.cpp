


#include <iostream>

using namespace std;

int main(){

char c;
cin >> c;

    switch (c){
    case 'l': /* Fall Through*/
    case 'L': cout << 1 << endl; break;
    case 'm': /* Fall Through*/
    case 'M': cout << 2 << endl; break;
    case 'x': /* Fall Through*/
    case 'X': cout << 3 << endl; break;
    case 'j': /* Fall Through*/
    case 'J': cout << 4 << endl; break;
    case 'v': /* Fall Through*/
    case 'V': cout << 5 << endl; break;
    case 's': /* Fall Through*/
    case 'S': cout << 6 << endl; break;
    case 'd': /* Fall Through*/
    case 'D': cout << 7 << endl; break;
    default: cout << "Error" << endl; break;
    }
 }
