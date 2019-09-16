/*
Ascensor 
Implementa una clase Ascensor para guardar el estado de un ascensor, que contiene la siguiente información:

Los límites del ascensor, es decir la planta más baja a la que puede llegar (puede ser negativa), y la más alta. Ambos enteros.
La posición del ascensor (un real, ya que un ascensor puede estar a medio camino entre dos pisos). Este número debe estar entre los límites.
La velocidad del ascensor (en pisos por segundo). Pasado un cierto número de segundos, se puede calcular la nueva posición.
Si el ascensor está ocupado, es decir, si lleva gente. El ascensor debe saber el número de personas que hay dentro.
Haz los siguientes métodos:

Constructores: 1) con los límites, y que sitúa el ascensor en la posición más baja; 2) por defecto (planta 0 hasta la 5), 
    también situando el ascensor en la posición más baja. Ambos constructores deben inicializar el ascensor como parado y no ocupado.
    Un método que diga en qué planta se encuentra el ascensor. La planta se considera que es el entero justo por debajo de la posición.
    Un método para obtener la dirección: arriba o abajo.
    Un método para saber si el ascensor está ocupado o no.
    Un método para saber el número de personas que hay en el ascensor.
    Un método para llamar al ascensor desde cierta planta. Si el ascensor está ocupado no hay que hacer nada. Si está vacío,
    tiene que cambiar su velocidad para dirigirse hacia la planta solicitada.
    Un método para que entre un cierto número de personas en el ascensor (un entero), y otro para salgan de él.
    Un método para averiguar si dos ascensores estan en la misma planta (llama al método para averiguar la planta desde este método).
*/
  #include <iostream>
  using namespace std;
// clase  
  class Ascensor{
    int _limite_baja, _limite_alta;
    double _posicion;
    int _pisos, _segundos;
    bool _ocupado;
    bool _parado;
    int _numeroPersonas;
    
    public:
      /*constructor*/
      Ascensor();
      Ascensor(int limite_baja,int limite_alta);

      /*functions*/
      void menor(int limite_baja, int limite_alta);
  };
      /*functions  in  constructor*/

/* constructor functions */
  Ascensor::Ascensor(){
    _limite_baja = 0;
    _limite_alta = 5;
    _posicion = _limite_baja;
    _parado = true;
    _ocupado = false;
  }
  Ascensor::Ascensor(int limite_baja, int limite_alta){
    _limite_baja = limite_baja;
    _limite_alta = limite_alta;
    _limite_baja = _posicion;
    _parado = true;
    _ocupado = false;
  }