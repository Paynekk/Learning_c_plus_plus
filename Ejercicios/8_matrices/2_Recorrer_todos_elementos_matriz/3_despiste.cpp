/*
 Despiste

Pedro Medario está despistado y para inicializar una matriz toda con ceros, ha puesto lo siguiente:

int M[10][10];
for (int k = 0; k < 10; k++) {
   M[k][k] = 0;
}

Explícale a Pedro cuál es el problema de su código y qué está inicializando en realidad.

explicacion:

problema de codigo:
Pedro necesita inicializar dos for para poder trabajar con la fila  y columna esto se hace para poder 
inicializar toda la matriz

que esta inicializando:
esta inicializando solo numeros por igual por ejemplo M[0][0], M[1][1],M[2][2],M[3][3] 
*/