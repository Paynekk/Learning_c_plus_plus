/*get line obtiene la linea completa del typo de dato 
http://www.cplusplus.com/reference/string/string/getline/
 */


#include <iostream>

using namespace std;

int main(){
  int n;
  string nombre;
  cin >> n;
  getline(cin, nombre);
  cout << n << " '" << nombre << "'" << endl;
}



