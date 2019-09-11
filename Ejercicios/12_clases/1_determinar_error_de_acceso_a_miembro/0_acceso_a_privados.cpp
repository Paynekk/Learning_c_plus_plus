/* Acceso a privados 
Dada la clase y el programa siguientes 

Escribe una lista de asignaciones en la zona marcada con ** AQUÍ ** que intenten 
cambiar los valores de los atributos privados (solo los privados) de la tupla x. 
Normalmente cada asignación producirá un error, pero el ejercicio consiste precisamente
 en producir todos los errores posibles (para todos los atributos privados de Asdf).
*/

class Asdf {
   char cc;
private:
   int _x, Y;
public:
   double f_f;
public:
   float abc;
private:
   bool bul1, bul2;
};

int main() {
   Asdf x;
   // ** AQUÍ **
   x._x = 1;
   x.Y = 2;

   x.bul1 = true;
   x.bul2 = false;
}
