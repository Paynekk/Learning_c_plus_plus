#include <iostream>
using namespace std;

struct ConjuntoEnteros{
  int elementos[100];
  int nelementos;
};

int main(){
  ConjuntoEnteros A;
  A.nelementos = 5;
  A.elementos[0] = 1;
  A.elementos[1] = 3;
  A.elementos[2] = -1;
  A.elementos[3] = 4;
  A.elementos[4] = -8;

  int i;
  for(i = 0; i < A.nelementos; i++){
    cout << A.elementos[i] << endl;
  }
}