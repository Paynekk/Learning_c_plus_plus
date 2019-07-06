

#include <iostream>
using namespace std;

int suma1(int k){
    int n = k;
    n = n + 1;
    return n;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << suma1(a * b + 1);
}
