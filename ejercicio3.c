#include <stdio.h>

const int ESTUDIANTES = 15;

int main(){

int estudiantesPresentes;
int estudiantesFaltantes;

printf("Cuantos estudiantes hay presentes?\n");
scanf("%i", &estudiantesPresentes);

estudiantesFaltantes = ESTUDIANTES - estudiantesPresentes;

printf("Hoy faltaron %i estudiantes\n", estudiantesFaltantes);


	return 0;
} 