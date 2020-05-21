#include <stdio.h>

const int DIVISOR = 8;

int main(){

	float velocidadVendida;
	float velocidadRelativa;
	
	printf("Que velocidad le vendieron?\n");
	scanf("%f",&velocidadVendida);

	velocidadRelativa = velocidadVendida / DIVISOR ;

	printf("Usted tiene una velocidad de = %f\n", velocidadRelativa);

	return 0;
}