

#include <iostream>
using namespace std;

void espacios(int n){
  int j;
  for (j = 0;j < n; j++) cout << ' ';
}

int main(){
  int n, i;
  cin >> n;
  for(i = 0;i < n; i++){
    espacios(n -1 -i);
    cout << '/';
    espacios(i*2);
    cout << '\\' << endl;
  }
  for (i = 0; i < n; i++){
    espacios(i);
    cout << '\\';
    espacios((n - 1 - i)* 2);
    cout << '/' << endl;
  }
}