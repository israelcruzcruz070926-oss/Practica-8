#include <stdio.h>
#define MAX 5    
/*# define Pi 3.1416 esto sirve para que cualquier
función la utilize a parte de la principal. 
El 5 de MAX indica el numero de arreglos que almacena la cajita,
el contador se almacena en cada caja con el incremento de cada vuelta*/
int main ()
{
 int arreglo[MAX], cont; //un arreglo es un conjunto de variables 
 for (cont=0; cont<MAX; cont++)
 {
 printf("Ingrese el valor %d del arreglo: ", cont+1);
 scanf("%i", &arreglo[cont]);
 }
 printf("El valor ingresado para cada elemento del arreglo es:\n[");
 for (cont=0; cont<MAX; cont++)
 {
 printf("%d\t", arreglo[cont]);
 }
 printf("]\n");
 return 0;
}
// se puede hacer con while pero con for es más sencillo
