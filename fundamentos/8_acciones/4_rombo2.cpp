
#include <iostream>
using namespace std;

void linea(int espacios, int pos, char c){
  int i;
  for(i = 0; i < espacios; i++){
    if(i == pos) cout << c;
    else cout << ' ';
  }
}

int main(){
  int n, i;
  cin >> n;
  for(i = 0;i < n; i++){
    linea(n, n - 1 - i, '/');
    linea(n, i, '\\');
    cout << endl;
  }
  for(i = 0;i < n; i++){
    linea(n, i, '\\');
    linea(n, n - 1 - i, '/');
    cout << endl;
  }
}