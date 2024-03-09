#include <stdio.h>


/* se define el tipo de apuntador al tipo de dato para acceder al arreglo y se retorna el valor, ya no se usa el tipo de dato void*/
char* cambiarValor(char *parametros){ // se puede definir eñ arreglo con asterisco, resulta la misma sintaxis con apuntadores
	
	parametros = "Adios";
	return parametros;
	
}

int main(){
	
	char *param = "Hola"; // Ya no se tiene que definer la variable char mediante corchetes sino con apuntadores
	printf("\nImprime el primer mensaje: %s", param);
	
	param = cambiarValor(param);
	printf("\nImprime el segundo mensaje desde la funcion: %s", param);
	
	
	return 0;
}
