/*
Haz un programa que lee una secuencia de pares de temperaturas 
y ciudades y devuelve la ciudad que tiene la temperatura máxima. 
Un ejemplo de entrada seria:

21.8 Abella_de_la_Conca
2.8 Abrera
-2.4 Ager
27.6 Agramunt
17.2 Aguilar_de_Segarra
4.2 Agullana
1.4 Aiguafreda
2.1 Aiguamurcia
20.2 Aiguaviva
23.3 Aitona
18.0 Els_Alamus
999 final
 */
#include <iostream>
using namespace std;
int main(){
  double temp, temp_mayor = 0;
  string ciudad, ciudad_mayor;
  cin >> temp;
  getline(cin, ciudad);
  while(temp != 999 ){ // && ciudad != "final"
    if(temp > temp_mayor){
      temp_mayor = temp;
      ciudad_mayor = ciudad;
    }
    cin >> temp;
    getline(cin, ciudad);
  }
  cout << temp_mayor << ' ' << ciudad_mayor <<  endl;
}