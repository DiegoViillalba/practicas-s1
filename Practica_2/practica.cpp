//-----28/12/2021 
//-----Diego Antonio Villalba González 

#include <stdio.h>
#include<stdlib.h>
#include <cmath>


int main()
{
    //---- Declaración de variables ------//
    int select, clave;
    float cost, tot, IVA;


    //----- Código ------//
    printf("\n");
    printf(" _____ _                     _   _     \n");
    printf("| __  |_|___ ___ _ _ ___ ___|_|_| |___ \n");
    printf("| __ -| | -_|   | | | -_|   | | . | . |\n");
    printf("|_____|_|___|_|_|_/ |___|_|_|_|___|___|\n");

    printf("\n \n");

    printf("Bienvenido usuario, selecciona la categoría a la que pertenece el producto: \n");
    printf("\n");
    printf("Abarrotes      (1)\n");
    printf("Ferretería     (2)\n");
    printf("Línea blanca   (3)\n");
    printf("Medicina       (4)\n");
    printf("Electrónicos   (5)\n");
    printf("Moda           (6)\n");
    printf("Comida         (7)\n");
    printf("Juguetería     (8)\n");

    printf("\n ");
    printf("==============================================\n \n");

    printf("\n");
    scanf("%d",&select);
    printf("\n");
    printf("Ingresa la clave del producto: \n");
    printf("\n");
    scanf("%d",&clave);
    printf("\n");
    printf("Ingresa el costo del producto: \n");
    printf("\n");
    scanf("%f",&cost);

    if (select == 4)
    {
        printf("\n ");
        printf("==============================================\n \n");
        printf("Clave del producto:  ");
        printf("%d \n \n", clave);
        printf("Subtotal :           $");
        printf("%f \n", cost);
        printf("IVA (No aplica) :    $0.00\n");
        printf("                     _________________\n");
        printf("Total:               $");
        printf("%f \n", cost);

        return 0;

    }
    else
    {
        printf("\n ");
        printf("==============================================\n \n");
        printf("Clave del producto:  ");
        printf("%d \n \n", clave);
        printf("Subtotal :    $");
        printf("%f \n", cost);
        IVA = cost * 0.16;
        printf("IVA :         $");
        printf("%f \n", IVA);
        printf("              _________________\n");
        printf("Total:        $");
        tot = cost + IVA ;
        printf("%f \n", tot);

        return 0;

    }
    
    
}