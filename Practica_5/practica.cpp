//-----15/1/2021 
//-----Diego Antonio Villalba González 

#include <stdio.h>

int main()
{
     //---- Declaración de variables ------//
    int numero ;
    int i = 1;
    long tabla;

    //----- Código ------//
    printf("\n");
    printf(" _____ _                     _   _     \n");
    printf("| __  |_|___ ___ _ _ ___ ___|_|_| |___ \n");
    printf("| __ -| | -_|   | | | -_|   | | . | . |\n");
    printf("|_____|_|___|_|_|_/ |___|_|_|_|___|___|\n \n");

    printf("Ingresa el numero del que quieres conocer su tabla de multiplicar \n \n");

    scanf("%i",&numero);

    printf("\n");

    do{
        tabla = numero*i;

        printf("%d", numero);
        printf("  por  ");
        printf("%d",i);
        printf(" es : ");
        printf("%lu \n \n ",tabla);

        i = i+1;

    }while(i<=10);

    return 0;

}