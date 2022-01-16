#include <stdio.h>

int main()
{
/*Declaracion de Variables*/

int n = 0;
int numero=0;
long factorial=1;

//Pedimos el numero
printf("Ingresa el número para obtener el factorial: ");
scanf("%i",&numero);

//Calculamos el factorial en el ciclo

for(n=numero;n>=1;n--)
{
	factorial*=n;
}
//Mostramos el resultado
printf("El factorial de %i es  %lu \n", numero, factorial);

return 0;

}