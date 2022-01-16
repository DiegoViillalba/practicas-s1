//-----28/12/2021 
//-----Diego Antonio Villalba González 

#include <stdio.h>
#include<stdlib.h>

int main()
{
int day;

printf("\n");
printf(" _____ _                     _   _     \n");
printf("| __  |_|___ ___ _ _ ___ ___|_|_| |___ \n");
printf("| __ -| | -_|   | | | -_|   | | . | . |\n");
printf("|_____|_|___|_|_|_/ |___|_|_|_|___|___|\n");
printf("\n \n");
printf("Bienvenido usuario, ingresa el número del día de la semana (1-7): \n");
printf("\n");
scanf("%d",&day);


printf("El día de la semana correspondiente es: \n");

if (day == 1)
{
    printf("Lunes\n");
    return 0;
}
if (day == 2)
{
    printf("Martes\n");
    return 0;
}
if (day == 3)
{
    printf("Miercoles\n");
    return 0;
}
if (day == 4)
{
    printf("Jueves\n");
    return 0;
}
if (day == 5)
{
    printf("Viernes\n");
    return 0;
}
if (day == 6)
{
    printf("Sábado\n");
    return 0;
}
if (day == 7)
{
    printf("Domingo\n");
    return 0;
}
else
{
    printf("El día de número ingresado no existe\n");
    return 0;
}

}