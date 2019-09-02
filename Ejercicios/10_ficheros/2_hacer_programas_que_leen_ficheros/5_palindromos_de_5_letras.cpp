/*
Palíndromos de 5 letras 
Haz un programa que lea un fichero "words.txt" donde hay palabras de 5 letras y muestre aquellas
 que son palíndromos, separadas por espacios. Un palíndromo es una palabra que es capicúa, 
 si lee igual de izquierda a derecha o de derecha a izquierda. El resultado con el fichero enlazado 
 antes seria

level refer radar madam rotor civic sexes solos sagas kayak minim
tenet shahs stats stets kaiak finif dewed
*/

#include <iostream>
#include <fstream>
using namespace std;
void palabra_palindroma(string palabra,int  conteo){
  
int tamanyo = palabra.size();
int comp = palabra.size() -1;


    for(int i =0; i < tamanyo; i++ ){
      if(palabra[i] != palabra[comp]){
        return;
      }
      comp--;
    }
    conteo++;
    if(conteo == 10 ){
      cout << palabra << endl;
      conteo = 0
    }else{
      cout << palabra << " ";
    }
    
}

void leer_fichero(string fichero){
  string palabra;int conteo = 0;
  //         5_words.txt
  ifstream F (fichero.c_str());
  if(F.is_open()){
    while(!F.eof()){
      F >> palabra;
      palabra_palindroma(palabra, conteo);
    }
  }else{
     cout << "No se ha podido abrir el fichero " << fichero << endl;
  }
  

}


int main(){
  string fichero;
  cin >> fichero;
  leer_fichero(fichero);


}
