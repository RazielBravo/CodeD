#include <stdio.h>



int main(){
	// Para que el usuario proporcione el tamaño de la cadena y sus valores para cada espacio en memoria
	
	// Solicitar los valores al usuario
	int tamanioArray;
	printf("Proporcione el tamanio del array:");
	scanf("%d", &tamanioArray);
	
	// Se crea el arreglo 
	int numeros[tamanioArray];
	
	// Solicitar los valores al usuario
	
	for(int i = 0; i < tamanioArray; i++){
		printf("Proporciona el valor %d del arreglo:", i + 1);
		scanf("%d", &numeros[i]);
		
	}
	
	// Mostrar los valores y cada elemento del arreglo
	
	for (int i = 0; i < tamanioArray; i++){
		printf("Valor [%d] = %d\n", i, numeros[i]);
	}
	

	
	return 0;
}
