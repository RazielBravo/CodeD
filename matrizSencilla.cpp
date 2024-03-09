#include <stdio.h>



int main(){
	
	const int RENGLONES = 2;
	const int COLUMNAS = 3;
	
	// Definimos la matriz 
	
	int matriz[RENGLONES][COLUMNAS];
	
	matriz[0][0] = 100;
	matriz[0][1] = 200;
	matriz[0][2] = 300;
	matriz[1][0] = 400;
	matriz[1][1] = 500;
	matriz[1][2] = 600;
	
	printf("Valor 1: %d", matriz[0][1]);
	printf("\nValor 6: %d", matriz[1][1]);
	
	// Y asi sucesivamente con cada uno de los elementos deseados a imprimir
	
	
	
	return 0;
}
