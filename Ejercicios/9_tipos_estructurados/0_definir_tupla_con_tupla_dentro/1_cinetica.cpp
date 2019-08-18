/*
Cinética

  Define una tupla Vector2D con dos coordenadas x e y de tipo double.
  Luego define una tupla Cuerpo para el modelo físico de un cuerpo que
  tiene un nombre (un string), una masa (un real), y una posicion, velocidad y aceleracion (de tipo Vector2D).
*/
struct Vector2D{
  double x, e;
};
struct Cuerpo{
  string nombre;
  double masa;
  Vector2D posicion, velocidad, aceleracion;
};
#include <iostream>
using namespace std;

int main(){

}