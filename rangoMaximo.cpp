#include <stdio.h>


int main(){
	
	// rango maximo y minimo
	
	int minimo = 0;
	int maximo = 5;
	int dato;
	bool rango;
	
	printf("\n Proporciona un numero numero entre 0 y 5:", dato);
	scanf("%d", &dato);
	
	rango = dato >= minimo && dato <= maximo;
	printf("\nValor dentro del rango: %d", rango);
	
	
	
	return 0;
}
