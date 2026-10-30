/*Israel Cruz Cruz
Ejercicio 3 laboratorio
Estructuras de repetición*/
#include <stdio.h>
int main ()
{
   char op = 'n';
   double sum = 0, calif = 0;
   int veces = 0;
   do
   {
     printf("\tSuma de calificaciones\n");
     printf("Ingrese la calificación:\n");
     scanf("%lf", &calif);
     veces++;
     sum = sum + calif;
     printf("¿Desea sumar otra? S/N\n");
     setbuf(stdin, NULL);            // limpia el buffer del teclado
     scanf("%c",&op); //si se comenta este, bota la calificación
     getchar(); //si se comenta este, el ciclo while funciona bien
   }
 while (op == 'S' || op == 's');
  printf("El promedio de las calificaciones ingresadas es: %lf\n", sum/veces);
 return 0;
}
