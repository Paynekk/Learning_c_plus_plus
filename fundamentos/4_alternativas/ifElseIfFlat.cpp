


#include <iostream>

using namespace std;
/*Categorias de peso en judo (Hombres)
 < 66kg - Super-ligero
 < 73kg - Ligero
 < 81kg - medio
 < 90kg - semi-pesado
>= 90kg - pesado

*/
int main() {
double peso;
cout << "peso? ";
cin >> peso;
if(peso < 66.0){
    cout << "super-ligero" << endl;
}else if (peso < 73.0){
    cout << "ligero" << endl;
}else if (peso < 81.0){
    cout << "medio" << endl;
}else if (peso < 90.0){
    cout << "semi-pesado" << endl;
}else if (peso >=2 90.0){
    cout << "Pesado" << endl;
 }else{
 cout << "Otra" << endl;
 }
}
