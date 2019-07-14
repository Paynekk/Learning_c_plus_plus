


/*Determina la salida del siguiente programa
si la entrada es
15 231
This line is not empty!


DA0C8D1CA4
*/

#include <iostream>
using namespace std;

int main() {
   int a, b;
   string s;
   cin >> a >> b;
   getline(cin, s);
   cout << '"' << s << '"' << endl;
   getline(cin, s);
   cout << '"' << s << '"' << endl;
}