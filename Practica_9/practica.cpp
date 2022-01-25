//-----25/1/2022 
//-----Diego Antonio Villalba Gonzalez 
#include <stdio.h>
int main(){

int l , lenght, num ;
int i = 0;
int j = 0;

printf("\n");
    printf(" _____ _                     _   _     \n");
    printf("| __  |_|___ ___ _ _ ___ ___|_|_| |___ \n");
    printf("| __ -| | -_|   | | | -_|   | | . | . |\n");
    printf("|_____|_|___|_|_|_/ |___|_|_|_|___|___|\n");

    printf("\n \n");
    printf("Bienvenido usuario, ingresa los datos requeridos. \n");

    printf("Por favor, ingresa la longitud del arreglo\n \n");
    scanf("%d", &l);
    lenght = l-1;
    int array[lenght];
    printf("\n \n");

    while (i<= lenght){

        printf("Por favor, ingresa un numero entero para la posicion  %d \n \n",i);
        scanf("%d", &array[i]);
        i++;
        printf("\n \n");
    }

    printf("\n \n");
    printf("Ingresa el número del que deseas conocer existencia. \n");
    scanf("%d", &num);
    printf("\n \n");

    while (j<=lenght)
    {
        if (array[j]==num)
        {
            printf("El número existe, se encuentra en la posicion -> %d \n",j);
            return 0;
        }
        else{
            j++;
        }
    }
    printf("El número no existe en el arreglo \n");
}