
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  int limite, j =0;
  bool primo = true;
  
  
  for (int i = 2; i <= 10; i++){

    for (j = 2; j < i ; j++){
    cout << i << " " << j  << " "<< i%j << endl;
      if(i % j < 1){
      
        break;
      }else if(j == i-1){
        /* cout << i << " "; */
      }
    }
    
  }
}