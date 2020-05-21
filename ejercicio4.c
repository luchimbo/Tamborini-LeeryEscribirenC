#include <stdio.h>

const int MESES = 12;

int main(){

int numMascota;
int numAlimento;
int pesoAlimento;
int costoAlimento;
float gastoAnual;


printf("Cuantas mascotas tiene?\n");
scanf("%i", &numMascota);

printf("Cuantas bolsas de alimento compra por cada mascota por mes?\n");
scanf("%i", &numAlimento);

printf("Cuantos kilos de alimento tiene una bolsa?\n");
scanf("%i", &pesoAlimento);

printf("Cual es el precio de una bolsa de alimentos?\n");
scanf("%i", &costoAlimento);

gastoAnual = (numAlimento*costoAlimento*numMascota)*MESES;

printf("Con %i bolsas de %i kg para %i mascotas por mes, en un anio se gasta $ %.2f\n", numAlimento, pesoAlimento, numMascota, gastoAnual);


	return 0;
}