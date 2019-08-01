/*
Muchos Typedefs 
Escribe los tipos de tabla (typedefs) siguientes:

Primitiva de 7 enteros.
Frase de 100 strings.
Meses de 12 strings.
Vector2D de 3 doubles.
Palabra de 50 chars.
Ahora declara almenos una tabla de cada tipo en el programa principal y compila para comprobar que todo está bien escrito.
 */
#include <iostream>
using namespace std; 
typedef int Primitiva[6];
typedef string Frase[100];
typedef string Meses[12];
typedef double Vector2D[3];
typedef char Palabra[50];
int main(){
Primitiva numero; Frase palabra; Meses anyo; Vector2D medida; Palabra arroba;
numero[5] = 6;
palabra[99] = "ultima";
anyo[0] = "enero";
medida[1] = 2.55;
arroba[1] = '@';

cout << "  numero: " << numero[5] << "  palabra: " << palabra[99] << "  anyo: " << anyo[0]
<< "  medida: " << medida[1] << "  arroba: " << arroba[1] << endl;
}