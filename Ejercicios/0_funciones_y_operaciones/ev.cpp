

#include <iostream>

using namespace std;


int main () {
int a = 1, b = 3; char c = 'a', d = 'd';
double x = 0.0, y = 1.2; string s1 = "aab", s2 = "ccd";
bool resp = a < 1 || b > 2
// true                     true                        true
a < 1 || b > 2         c != 'a' && c != 'd'       a == 1 || b == 3
// true                               true
  s1 < "aaa" || s1 > "zzz"         s1 == s2 || s1 + "b" != "aabb" ; endl           c == 'z' || d == 'd'    a / b == 0 || a % b == 0


  cout << resp << endl;
}
