

#include <iostream>
using namespace std;

int main(){
  int T[10]{1,2,3,4,5,6,7,8,9,10}; int numero = 11;
  for(int i=0;i<10;i++){
    if(numero == T[i]){
      cout << "Lo encontre! " << endl;
    }
  }
}
