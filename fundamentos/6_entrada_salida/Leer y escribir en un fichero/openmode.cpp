
/* http://www.cplusplus.com/reference/fstream/fstream/open/   */
#include <iostream>

#include <fstream>

using namespace std;

int main(){
    fstream F;
    /*  fstream
       app = All output operations happen at the end of the file, appending to its existing contents.
       out = File open for writing: the internal stream buffer supports output operations.
       in  = File open for reading: the internal stream buffer supports input operations.
                                            --------------
       seekg = Set position in input sequence



       */
    F.open("prueba.txt", fstream::in |fstream::out | fstream::app); // abriendo fichero
    F << " the end" << endl; // escribiendo en la ultima linea append
    F.seekg(0);  // Especificando la posicion que deve colocarse.
    string linea; // especificando tipo de dato
    getline(F, linea); // obteniendo un string del fichero F( en este caso la primera linea)
    cout  << linea << endl; // sacando linea por consola
    F << "The end 2 " << endl; // escribiendo the end al final append
    F.close();
}
