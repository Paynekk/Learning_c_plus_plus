/*Escribe una función es_perfecto que determina si un número
 es perfecto. Consulta la actividad Números Perfectos para saber
  qué es un número perfecto. Reescribe el programa de la lista de 
  números perfectos para que use la función que has hecho. 
  Números Perfectos 
Un número x se denomina "perfecto" si la suma de sus divisores menores
 que x coincide con x precisamente.
  Son perfectos el 6 (1 + 2 + 3) y el 
  28 (1 + 2 + 4 + 7 + 14), por ejemplo. 
  Averigua qué números perfectos hay menores que 10000.*/

  #include <iostream>
  using namespace std;

  void es_perfecto (int num){
    int i, suma, modulo;
     for (i = 1;i < num; i++){
       if (num % i == 0){
         suma = i + i;
       }
     } 
     if (num == suma){
           cout << num << " Es un numero perfecto" << endl;
           }else {
           cout << num << " No es un numero perfecto" << endl;
           }
  }

  int main (){
    int num;
    cout << "a continuacion escriba un numero para saber si es perfecto o no: ";
    cin >> num;
    es_perfecto(num);
  
  }


  