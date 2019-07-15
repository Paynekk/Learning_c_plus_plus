/* 
Determina la función del siguiente programa
utilizando las siguientes entradas
____________
1 party
0 I wanna
-1
3 clavito.
1 clavó
0 Pablito
2 un
____________
-1
4 d
5 e
1 a
3 c
2 b
___________
-1
3istico
1calif
0 super
2ragil
-1
________
*/

#include <iostream>
using namespace std;

int main()
{
  int n, M = 0;
  string p, F[20];
  cin >> n;
  while (n != -1)
  {
    if (n > M)
      M = n;
    getline(cin, p);
    F[n] = p;
    cin >> n;
  }
  F[0][0] = '"'; //
  for (int i = 0; i <= M; i++)
  {
    cout << F[i];
  }
  cout << '"' << endl;
}