/* 
C++
Mezcla de Píxels 
El siguiente programa

utiliza una clase Pixel mezclando los colores azul y rojo para producir un nuevo color.

El Pixel tiene tres campos enteros r, g y b (del inglés: red, green, y blue).
Estos valores representan las intensidades de cada color, entre 0 y 255.
La mezcla de píxels devuelve un nuevo Pixel donde los colores son la media (entera) de los valores r, g y b por separado. 
Si un color es (100, 0, 200) i otro (0, 50, 100), la mezcla será: (50, 25, 150).

Implementa la clase Pixel de forma que el programa anterior funcione correctamente y produzca la salida

0 0 0
127 0 127
 */

  #include <iostream>
  using namespace std;
class Pixel{
    
    int _r, _g, _b;
  public:
  // constructor
  Pixel();
  Pixel(int red, int green, int blue);
  Pixel(const Pixel& f); 
  // getters
  int red() const;
  int green() const;
  int blue() const;
  // functions
  Pixel mezcla( Pixel& RGB);
  
};
/**           contructor functions                  **/
  Pixel::Pixel(){
    _r = 0;
    _g = 0;
    _b = 0;
  }
  Pixel::Pixel(int red, int green, int blue){
    _r = red;
    _g = green;
    _b = blue;
  }
  Pixel::Pixel(const Pixel& f){
    _r = f._r;
    _g = f._g;
    _b = f._b;
  }

/**           getters functions                  **/
  int Pixel::red () const {return _r;};
  int Pixel::green () const {return _g;};
  int Pixel::blue () const {return _b;};
  
/*                 functions                                  */
 
Pixel  Pixel::mezcla( Pixel& RGB){
  Pixel mezclado;
    mezclado._r =  (_r + RGB._r) /2;
    mezclado._g =  (_g + RGB._g) /2;
    mezclado._b =  (_b + RGB._b) /2;
    return  mezclado;
  }

int main() {
  Pixel azul(0, 0, 255), negro;
   Pixel rojo(255, 0, 0);
   Pixel m;
   m = rojo.mezcla(azul);
   cout << negro.red() << " " << negro.green() << " " << negro.blue() << endl;
   cout << m.red() << " " << m.green() << " " << m.blue() << endl; 
}
