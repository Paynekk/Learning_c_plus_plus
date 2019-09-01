/*
Grep 
Haz un programa que lee un nombre de fichero y una palabra y
muestra por pantalla las líneas del fichero que contienen la palabra. Por ejemplo,
supongamos que el fichero "articulo.txt" contiene:
----------------------------------------------------
Yo nací en el Africa, por eso mi piel es negra,
Mi nombre es Oblongo, que en dialecto Swahili
quiere decir "más largo que ancho".
Conozco cada arbol de esta selva, cada sendero de mi aldea,
cada historia de su gente, ¡cada historia!...
------------------------------------------------------
Entonces, si ejecutamos el programa con la entrada:

articulo.txt cada
la salida será:
-----------------------------------------------------------
Conozco cada arbol de esta selva, cada sendero de mi aldea,
cada historia de su gente, !cada historia!...
---------------------------------------------------------
*/


#include <iostream>
#include <fstream>
using namespace std;


void lineas_pal(string linea,string pal_linea[][100], int& cont_lin, int num_pal[] ){
 int tamanyo = linea.size(), cont_pal=0;

    
  for (int i = 0; i < tamanyo;i++){
    if(linea[i] != ' '){
       pal_linea[cont_lin][cont_pal] = pal_linea[cont_lin][cont_pal] + linea[i];

    }else{
      cont_pal++;
    }
  }
  num_pal[cont_lin] = cont_pal;
  cont_lin++; cout << tamanyo << " ";
  cout << cont_lin;
}

void mostrar_lineas(string pal_linea[][100],const int num_pal[],const int& cont_lin){

for(int i=0; i < cont_lin;i++){
  cout << num_pal[i] << " ";
  for (int j = 0; j <= num_pal[i]; j++){
    cout << pal_linea[i][j] << " ";
  }
  cout << endl;
  }
}

void encontrar_palabra(string pal_linea[][100],const int num_pal[], const int& cont_lin){
  
for(int i=0; i < cont_lin;i++){
  for (int j = 0; j <= num_pal[i]; j++){
      
  }
  cout << endl;
  }
}
int main(){

  string fichero, pal_clave,palabra , linea ,pal_linea[100][100]; int cont_lin=0, num_pal[50];
  cin >> fichero >> pal_clave;
  ifstream F(/* fichero.c_str() */"3_articulo.txt");
  while(!F.eof()){
   getline(F, linea);
   lineas_pal(linea,pal_linea,cont_lin, num_pal, pal_clave);
  }
/* mostrar_lineas(pal_linea, num_pal, cont_lin); */
}
