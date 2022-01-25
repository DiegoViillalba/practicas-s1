//-----25/1/2022 
//-----Diego Antonio Villalba Gonzalez 

#include <stdio.h>
#include <cmath>

float grad_rad(float grad){

	float  res;
	
    res = (grad*M_PI)/180 ;

    return res;
	
} 

int main(){

	//declaramos las variables a usar.
	float grad , res;

    printf("\n");
    printf(" _____ _                     _   _     \n");
    printf("| __  |_|___ ___ _ _ ___ ___|_|_| |___ \n");
    printf("| __ -| | -_|   | | | -_|   | | . | . |\n");
    printf("|_____|_|___|_|_|_/ |___|_|_|_|___|___|\n");

    printf("\n \n");

    printf("Bienvenido usuario, ingresa los datos requeridos. \n");

    printf("Por favor, ingresa los grados a convertir: \n \n");

    scanf("%f", &grad);

	
	res = grad_rad(grad);
	
	printf("\n ");
    printf("==============================================\n \n");

    printf("Su conversion equivalente a grados es:\n");

    printf("%f \n",res );
	
}