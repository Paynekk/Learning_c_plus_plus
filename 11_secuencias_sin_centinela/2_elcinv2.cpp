
#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ifstream F;
  F.open("texto.txt");
  int n;
  char c;
  while (F >> n >> c){
    cout << n << ' ' << c << endl;
  }
  F.close();
}