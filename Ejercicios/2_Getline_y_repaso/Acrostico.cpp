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
    while (linea != "---"){ // si es distinto de 
        s += linea[0]; // guarda la primera letra de cada linea en este caso ACROSTIC
        getline(cin, linea); // vuele a ejecutarse getline para seguir leyendo la linea de abajo
    }
    cout << s << endl; 


}