#include <stdio.h>
#define RENGLONES 2
#define COLUMNAS 3


int main(){
	
	//int matriz[RENGLONES][COLUMNAS] = { 100, 200, 300, 400, 500, 600};	
	
	// o tambien podria separarse con llaves para cada arreglo y en caso de existir mas de dos arreglos
	// asi mejoramos la sintaxis y claridad del codigo
	
	int matriz[RENGLONES][COLUMNAS] = {{100, 200, 300},{400, 500, 600}};
	
	printf("Valor 2: %d\n", matriz[0][1]);
	printf("Valor 5: %d\n", matriz[1][1]);
	
	// Y asi sucesivamente todos los elementos que deseas recorrer para la impresion del dato
	
	
	
	
	
	
	return 0;
}
