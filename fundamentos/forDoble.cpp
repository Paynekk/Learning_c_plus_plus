

#include <iostream>

using namespace std;


int main(){
    int N;
    int i;
    for (N = 1; N <= 10; N++){
        for(i = 1; i <= 10; i++){
            cout << i << " x " << N << " = " << i * N << endl;
        }
        cout << endl;
    }
}
