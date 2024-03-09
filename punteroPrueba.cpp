#include <stdio.h>

int prueba;


int main(){
	
	printf("\nIngresa un numero:");
	scanf("%d", &prueba);
	
	printf("\nEl numero ingresado es: %d", prueba);
	printf("\nEl numero de la casilla de memoria: %p", &prueba);
	
	
	
	
	
	
	return 0;
}
