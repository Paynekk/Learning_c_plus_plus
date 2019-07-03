

#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Numero? ";
    cin  >> N;
    int i, fact = 1;

    for(i = 1; i <= N; i++){
        fact = fact * i;

    }
    cout << fact << endl;
}
