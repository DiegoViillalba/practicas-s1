//-----25/1/2022 
//-----Diego Antonio Villalba Gonzalez 

#include <stdio.h>


float perimetro(float n, float l){

	float  res;
	
    res = n*l ;

    return res;
	
} 

int main(){

	//declaramos las variables a usar.
	float n , l, res;

    printf("\n");
    printf(" _____ _                     _   _     \n");
    printf("| __  |_|___ ___ _ _ ___ ___|_|_| |___ \n");
    printf("| __ -| | -_|   | | | -_|   | | . | . |\n");
    printf("|_____|_|___|_|_|_/ |___|_|_|_|___|___|\n");

    printf("\n \n");

    printf("Bienvenido usuario, ingresa los datos requeridos. \n");

    printf("Por favor, ingresa el número de lados del poligono regular: \n \n");

    scanf("%f", &n);

    printf("Por favor, ingresa el largo de un lado: \n \n");

    scanf("%f", &l);


	
	res = perimetro(n,l);
	
	printf("\n ");
    printf("==============================================\n \n");

    printf("El perimetro del poligono es:\n");

    printf("%f \n",res );
	
}