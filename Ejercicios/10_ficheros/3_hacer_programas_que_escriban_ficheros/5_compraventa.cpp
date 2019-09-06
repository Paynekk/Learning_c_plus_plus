/* Compraventa 
Haz un programa que lea un fichero compraventa.txt con el siguiente formato

c100 v50 c25 v10 v5 c210 c5 v3
v10 v10 c10 c20
-----------------------------------------------------------------------------------------
donde los números con una "c" delante son "compras" y los que tienen delante una "v" son "ventas". 
El programa debe escribir un fichero contabilidad.txt donde se hagan las sumas de las compras y las 
ventas de cada línea. Hay que escribir los dos enteros para compras y ventas en este orden (más su prefijo "c" o "v").
 Con el ejemplo anterior, el fichero contabilidad.txt una vez ejecutado el programa será
------------------------------------------------------------------------------------------
c340 v68
c30 v20
c3 v2 
*/

#include <iostream>
#include <fstream>
using namespace std;
void palabras_linea(string linea,string tabla[], int& cont){// esta funcion mete cada palabra de una linea en una tabla
cont = 0;
  int tamanyo = linea.size();
  for (int i = 0; i < tamanyo; i++){
    tabla[i] = "";
      if(linea[i] != ' '){
        tabla[cont] += linea[i];
      }else{
        cont++;
      }
  }
}
void muestra_ventas(string tabla[],const int cont){// esta funcion muestra las ventas y compras de cada linea
  int compra=0, venta=0, suma_compra =0 ,suma_venta=0;
 
for (int i = 0; i <= cont; i++){
  if(tabla[i][0] == 'v'){
    tabla[i].replace(0,1,"");
    venta = atoi(tabla[i].c_str());
    suma_venta +=  venta;
  }else if(tabla[i][0] == 'c'){
    tabla[i].replace(0,1,"");
    compra = atoi(tabla[i].c_str());
    suma_compra +=  compra;
  }
}
cout << endl;
 cout <<  'c' << suma_compra << " v" << suma_venta <<endl;
 }
void leer_fichero(string nombre){// esta funcion lee fichero y muestra por pantalla las ventas y compras en total
  string linea, tabla[100];     // de cada linea 
  int cont = 0;
  fstream F(nombre.c_str());
  if(F.is_open()){
    while(!F.eof()){
      getline(F,linea);
      palabras_linea(linea, tabla, cont);
      muestra_ventas(tabla, cont);
      
  }
  }else{
      cout << "No se pudo abrir el fichero " << nombre << endl;
  }
  
}


int main(){
    string nombre; 
    cin >> nombre;
    nombre += ".txt";
    leer_fichero(nombre);
}

