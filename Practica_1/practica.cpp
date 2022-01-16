//-----28/12/2021 
//-----Diego Antonio Villalba González 

#include <stdio.h>
#include<stdlib.h>
#include <cmath>

int main()
{
    //---- Declaración de variables ------//
    int select ;
    float rad, grad , res;

    //----- Código ------//
    printf("\n");
    printf(" _____ _                     _   _     \n");
    printf("| __  |_|___ ___ _ _ ___ ___|_|_| |___ \n");
    printf("| __ -| | -_|   | | | -_|   | | . | . |\n");
    printf("|_____|_|___|_|_|_/ |___|_|_|_|___|___|\n");

    printf("\n \n");

    printf("Bienvenido usuario, selecciona la opción que necesitas . \n");
    printf("\n");
    printf("Radianes a grados (1)\nGrados a radianes (2)\n ");
    printf("\n");
    scanf("%d",&select);

    if (select == 1)
    {
        printf("\n ");
        printf("==============================================\n \n");
        printf("Has seleccionado convertir de radianes a grados\n");
        printf("Por favor, ingresa los radianes a convertir: \n \n");

        scanf("%f",&rad);

        res = (rad*180)/M_PI ;

        printf("\n ");
        printf("==============================================\n \n");

        printf("Su conversión equivalente a grados es:\n");

        printf("%f \n",res );

        return 0;

    }
    if (select == 2)
    {
        printf("\n ");
        printf("==============================================\n \n");
        printf("Has seleccionado convertir de grados a radianes\n");
        printf("Por favor, ingresa los grados a convertir: \n \n");

        scanf("%f",&grad);

        res = (grad*M_PI)/180 ;

        printf("\n ");
        printf("==============================================\n \n");
        printf("Su conversión equivalente a radianes es:\n");

        printf("%f \n",res );

        return 0;
    }
    else 
    {
    printf("Seleción inválida, inténtalo de nuevo:\n");
    return 0;
    }
    
    
}
