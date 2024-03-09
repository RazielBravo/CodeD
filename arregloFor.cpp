#include <stdio.h>



int main(){
	
	int tamanio = 5;
	
	int numeroArreglo[tamanio];
	
	numeroArreglo[0] = 68;
	numeroArreglo[1] = 65;
	numeroArreglo[3] = 37;
	numeroArreglo[4] = 20;
	
	printf("\n Los valores del arreglo son:");
	for (int i = 0; i < tamanio; i++){
		printf("\nValor %d [%d] = %d", i + 1, i, numeroArreglo[i]);
	}
	
	
	
	return 0;
}
