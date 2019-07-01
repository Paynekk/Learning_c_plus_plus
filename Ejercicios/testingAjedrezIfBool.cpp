


   /* Haz un programa que te pida una casilla de un tablero
    de ajedrez (indicando fila y columna, las dos entre 1 y 8)
     y el programa diga si la casilla es blanca o negra.
     Piensa bien la expresión que utilizarás primero.*/


     #include <iostream>

     using namespace std;

      int main () {
int x = 0, y = 0;

cout << "Valor de x?" << endl;
cin >> x;
cout << "Valor de y?" << endl;
cin >> y;



if(x % 2 == 1 && y % 2 == 1 || y == x || x % 2 == 0 && y % 2 == 0){
cout << "el recuadro es blanco";
}else{
cout << "el recuadro es negro";
}

      }
