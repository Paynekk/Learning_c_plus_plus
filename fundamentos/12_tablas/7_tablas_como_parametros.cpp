
#include <iostream>
using namespace std;

void muestra_tabla(int V[], int tam){
  cout << '[';
  cout << V[0];
  for(int i=1;i<tam;i++){
    cout << ", " << V[i];
  }
  cout << ']';
}

int main(){
  int T[] ={1,2,3,4,5,6,7,8,9,10};
  cout << T[0] << endl;
  muestra_tabla(T, 10);
  cout << endl;
  cout << T[0] << endl;
}