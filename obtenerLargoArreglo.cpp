#include <stdio.h>


int main(){
	
	int largo = 5;
	int numero[largo];
	numero[0] = 68;
	numero[2] = 90;
	numero[4] = 95;
	
	// Obtener el largo del arreglo (memoria), ya que en C en ocasiones no se puede saber el largo del arreglo
	// es necesario saber que c puede decirte el tamaño en bytes del arreglo y asi sacar tu tamanio
	int tamanioArreglo = sizeof(numero);
	printf("\nTamanio completo en bytes: %lu", tamanioArreglo);
	
	//memoria ocupada por una celda de arreglo
	int tamanioElemento = sizeof(numero[4]);
	printf("\nTamanio de un elemento en bytes: %lu", tamanioElemento);
	
	
	int longArreglo = tamanioArreglo / tamanioElemento;
	printf("\nLargo del arreglo: %d", longArreglo);
	
	
	printf("\n\n Valores de los arreglos:\n");
	for (int i = 0; i < largo; i++){
		printf("\n Valor de arreglo %d [%d] = %d", i+1, i, numero[i]);
	}
	
	
	
	
	
	
	
	
	return 0;
}
