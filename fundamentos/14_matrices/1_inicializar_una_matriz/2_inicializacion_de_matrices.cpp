#include <iostream>
using namespace std;

int main(){
  int T[5] = {1,2,3,4,5};
  float M[5][3] = { {1,-1,0.1}, {2,-2,0.2}, {3,-3,0.3}, {4,-4,0.4}, {5,-5,0.5} };
//               |0= 0  1 2 |1=  0  1  2 |2= 0  1  2| 3= 0  1  2 |4= 0  1  2|
  cout << M[0][1] << endl; // -1
  cout << M[4][1] << endl; // -5
  cout << M[4][1] << endl; // 0.5
} 