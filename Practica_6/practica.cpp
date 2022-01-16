//-----15/1/2021 
//-----Diego Antonio Villalba González 

#include <stdio.h>

int main()
{
     //---- Declaración de variables ------//

    int i = 2;
    int j = 2;
    int total = 0;

    //----- Código ------//
    printf("\n");
    printf(" _____ _                     _   _     \n");
    printf("| __  |_|___ ___ _ _ ___ ___|_|_| |___ \n");
    printf("| __ -| | -_|   | | | -_|   | | . | . |\n");
    printf("|_____|_|___|_|_|_/ |___|_|_|_|___|___|\n \n");

    printf("Esta es la lista de los números primos existentes entre 1 y 1000\n");

    while(j<=1000000){
        if(i<j){
            if(j%i==0){
            j = j+1;
            i=2;
            }
            else{
                if(i<3){
                    i=i+1;
                }
                else{
                    i=i+2;
                }
            }
        }
        
        else{
        printf("->  %d \n",j);
        j = j+1;
        i=2;
        total = total+1;
        }
        
    }

    printf("\n");
    printf("Total de números primos antes de 1000 : %d \n", total);
}