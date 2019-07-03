   /*
   Leer un numero entre 1-7 y mostrar por pantalla.
   lunes para el uno, martes para el 2 y asi consecutivamente
   hasta llegar a domingo
   */

   #include <iostream>
   using namespace std;

   int main() {
   int dia;
    cin >> dia;
  /*Con Switch*/

  switch(dia){
  case 1: cout << "Lunes"<< endl; break;
  case 2: cout << "Martes"<< endl; break;
  case 3: cout << "Miercoles"<< endl; break;
  case 4: cout << "Jueves"<< endl; break;
  case 5: cout << "Viernes"<< endl; break;
  case 6: cout << "Sabado"<< endl; break;
  case 7: cout << "Domingo"<< endl; break;
  default: cout << "Error" << endl; break;
  }
}







  /*
Con if Else
    if (dia == 1){
    cout << "lunes" << endl;
    }else if (dia == 2){
    cout << "Martes" << endl;
    }else if (dia == 3){
    cout << "Miercoes" << endl;
    }else if (dia == 4){
    cout << "Jueves" << endl;
    }else if (dia == 5){
    cout << "Viernes" << endl;
    }else if (dia == 6){
    cout << "Sabado" << endl;
    }else if (dia == 7){
    cout << "Domingo" << endl;
    }else{
    cout << "Error" << endl;
    }
*/

