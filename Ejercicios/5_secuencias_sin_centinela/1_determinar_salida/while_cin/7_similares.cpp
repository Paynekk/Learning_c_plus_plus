/*
Similares 
Determina la salida del programa:
para la entrada siguiente:

__ It is very nice uh to be input important and but it is mme more
important important two to be real nice
 */

#include <iostream>
using namespace std;

int main()
{
   string p, up;
   while (cin >> p) //entra un string
   {
      int a = p.size(), b = up.size();// a y b toman el numero de tamaño del stting hola = 4
      if (p.size() == up.size() || (p[0] == up[0] && p[a - 1] == up[b - 1]))
//si el tamaño es el mismo pasa |  si empieza con la misma letra y termina  pasa 
      {
         cout << p << ' ';// p sale por pantalla
      }
      up = p; // up es igual a p 
   }
   cout << endl;
}