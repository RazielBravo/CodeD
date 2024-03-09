#include <stdio.h>
#include <stdbool.h>

int main (){
	
	//tamaño de los tipos de datos con sizeof para mostar el tamaño en bytes
	//
	
	int entero; 
	float flotante;
	double doble;
	char caracter;
	char cadena[] = "Hola Mundo";
	bool booleano = true;
	
	//Para imprimir el especificador de formato
	// Debe ser con %lu por el tipo de dato a mostrar 
	// long unsigned solo numeros positivos (lu)
	
	printf("\n Tamanio de int en Bytes: %lu", sizeof(entero) );
	printf("\n Tamanio de float en Bytes: %lu", sizeof(flotante));
	printf("\n Tamanio de double en Bytes: %lu", sizeof(doble));
	printf("\n Tamanio de char en Bytes: %lu", sizeof(caracter));
	printf("\n Tamanio en la cadena en Bytes: %lu", sizeof(cadena));
	printf("\n Tamanio booleano en Bytes: %lu", sizeof(booleano));
	
	
	
	
	
	return 0;
	
	
}
