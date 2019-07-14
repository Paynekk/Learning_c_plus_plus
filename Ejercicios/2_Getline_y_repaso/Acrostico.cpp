/*Determinar la salida del programa siguiente:
Artistically I pen my verse
Crafting as I go
Romancing every line
Ordering the flow
Systematically perfected,
The verses are refined
In every work I labor
Concerned with what's defined
---
*/
#include <iostream>
using namespace std;
int main() {

   string linea, s;
    getline(cin, linea);
    while (linea != "---") {
        s += linea[0];
        getline(cin, linea);
    }
    cout << s << endl; 


}