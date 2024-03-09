#include <stdio.h>


int main(){
	
	int maximo = 10, minimo = -10;
	printf("Incrementos de 3 en 3: \n");
	for (int numero = 1; numero <= maximo; numero += 3){
		printf("%d ", numero);
	}
	
	printf("\nDecremento de 3 en 3: \n");
	for (int numero = 1; numero >= minimo; numero -= 3){
		printf("%d ", numero);
	}
	
	return 0;
}
