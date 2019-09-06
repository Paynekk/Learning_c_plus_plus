/* Compraventa 
Haz un programa que lea un fichero compraventa.txt con el siguiente formato

c100 v50 c25 v10 v5 c210 c5 v3
v10 v10 c10 c20
c1 v1 c1 v1 c1
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

void fichero_compra_venta(int compra, int venta){
    ofstream F("5_contabilidad.txt", ofstream::app);
    F << 'c' << compra << " v" << venta << endl;
}
void commpras_ventas(string tabla[],const int cont){// esta funcion muestra las ventas y compras de cada linea
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
 fichero_compra_venta(suma_compra,suma_venta);

 }



int main(){
    string nombre; string linea, tabla[100];
    cin >> nombre;
    nombre += ".txt";
  int cont = 0;
  fstream F(nombre.c_str());
  if(F.is_open()){
    while(!F.eof()){
      getline(F,linea);
      palabras_linea(linea, tabla, cont);
      commpras_ventas(tabla, cont);
    }
  }else{
      cout << "No se pudo abrir el fichero " << nombre << endl;
  }
      
}

