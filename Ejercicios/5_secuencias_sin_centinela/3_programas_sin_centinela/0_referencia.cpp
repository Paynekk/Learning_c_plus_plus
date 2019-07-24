


#include <iostream>
using namespace std;
int paso(int numero, int& total){
  
total = numero + total;
}

int main (){
int number = 5, total = 0;
while(cin >> number){

paso(number, total);
cout << number << ' ' << total << endl;
}



}