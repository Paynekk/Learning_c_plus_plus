/* 
 Días de Separación
Haz un programa que lee una secuencia de fechas con el siguiente formato:
13/05/2001
25/03/1997
01/08/2010
31/12/2005
...
y determina el número de días de separación entre la fecha más remota y 
la más reciente. El programa debe mostrar un resultado con un mensaje en el formato:

Entre el dia DD/MM/AAAA y el dia DD/MM/AAAA hay XXX días

Este problema se puede hacer directamente, sin tuplas ni funciones, 
pero resultaría muy difícil de hacer. La forma de atacarlo consiste en declarar 
una tupla Fecha e ir haciendo funciones que permitan trabajar con fechas, es decir,
 que reciben valores de tipo Fecha como parámetros. Así, el programa principal queda 
 mucho más simple y con las funciones nos podemos centrar en las distintas operaciones 
 que necesitamos para las fechas. Necesitarás, probablemente, funciones para:

    Leer una fecha.
    Mostrar una fecha.
    Comparar dos fechas.
    Determinar el número de días entre dos fechas.
    Calcular el número de días que tiene un mes (para la 4).
    Determinar si un año es bisiesto (para la 4).

Esta última función es algo más difícil que las anteriores (si la quieres hacer exacta), 
ssspero quizás puedas empezar con una aproximación simple.

*/

#include <iostream>
#include <fstream>
using namespace std;
struct Fecha{
    int dia, mes, anyo;
};

int comparar_fechas(Fecha x, Fecha& menor, Fecha& mayor){
if (x.anyo < menor.anyo){
    menor = x;
    }else if(x.anyo == menor.anyo){
        if(x.mes < menor.mes){
            menor = x;
        }else if(x.mes == menor.mes){
            if(x.dia < menor.dia)  menor = x;
            }
        }
        if (x.anyo > mayor.anyo){
        mayor = x;
    }else if(x.anyo == mayor.anyo){
        if(x.mes > mayor.mes){
            mayor = x;
        }else if(x.mes == mayor.mes){
            if(x.dia > mayor.dia)  mayor = x;
            }
        }
    }
/*
Entonces se utiliza la fórmula lógica p ∧ ( ¬ q ∨ r ) 
para establecer si un año dado es bisiesto: es bisiesto si es divisible entre cuatro
y (no es divisible entre 100 o es divisible entre 400) */
        bool es_bisiesto(int x){
            return(x % 4 == 0 && x % 100 != 0 || x % 400 == 0);
        } 

/* 
Meses con 30 días: Abril, Junio, Septiembre y Noviembre.
Meses con 31 días: Enero, Marzo, Mayo, Julio, Agosto, Octubre y Diciembre.
Meses con 28 días: Febrero (Menos cuando es bisiesto que tiene 29 días).
   1 3 5 7 8 10 12  31 dias
      4 6   9 11    30 dias
    2               28 menos cuando es bisiesto tiene 29 dias
 */
    int dias_meses(Fecha x){
        int total_dias = 31;
        if(x.mes == 4 || x.mes == 6 ||x.mes == 9 ||x.mes == 11 ){
            total_dias = 30;
        }else if (x.mes == 2 ){
            if(es_bisiesto(x.anyo)){
                total_dias = 29;
            }else{
                total_dias = 28;
            }   
        }
        return total_dias;
    }
   /*determinando cantidad de dias entre fos fechas
 13/05/2001
16/05/2001*/
   int dias_fechas(Fecha menor, Fecha mayor, int& dias){
    int i;      
    for(i = 0; menor.dia != mayor.dia || menor.mes != mayor.mes || menor.anyo != mayor.anyo;i++){
        
        if(menor.dia >= dias_meses(menor)){
            menor.mes++;
            menor.dia = 0;
           if(menor.mes > 12){
             menor.anyo++;
             menor.mes = 1;
           }
         }
        menor.dia++;
        }
        dias = i;
    } 

int main (){
    ifstream Fechas;
    Fecha x,mayor, menor{30,12,9999}; char c; int dias;
    Fechas.open("fechas.txt");
    while(Fechas >> x.dia >> c >> x.mes >> c >> x.anyo){
     comparar_fechas(x, menor, mayor);
    }
    Fechas.close();
    dias_fechas(menor, mayor, dias);
    cout << "Entre el dia: " << menor.dia << c << menor.mes << c << menor.anyo 
        << " y el dia: " << mayor.dia << c << mayor.mes << c << mayor.anyo;
    cout << " hay " << dias << " dias.";
}

