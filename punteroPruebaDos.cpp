#include <stdio.h>

int num;



int main(){
	
	printf("\nIngresa un numero:");
	scanf("%d", &num );
	
	printf("\nEl valor proporcionado es: %d", num);
	printf("\nEl numero de la casilla de memoria: %p", &num);
	
	int *puntero = &num;
	
	*puntero = 20;
		
	printf("\nEl nuevo valor: %d", num);
	printf("\nEl mismo valor de la memoria: %p", puntero);
	
	
	
	
	return 0;
}
