#include <stdio.h>


int main(){
	// Suma acumulativa FOR
	int minimo = 0, maximo = 5, suma = 0;
	for (int numero = 1; numero <= maximo; numero++){
		printf("(suma + numero) --  %d + %d\n", suma, numero);
	
	// realizamos la suma acumulativa
	suma += numero;
	
	// se imprime el resultado de la suma acumulativa parcial
	
	printf("Suma parcial acumulada: %d\n\n", suma);
	
	}
	printf("\nLa suma de los primeros 5 numeros es: %d", suma);
	
	
	return 0;
}
