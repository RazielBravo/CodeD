#include <stdio.h>

void saludar(char mensaje[]){
	printf("El mensaje es: %s\n", mensaje);	
}


int main(){
	
	char argMensaje[50];
	printf("Introducir el mensaje deseado:", argMensaje);
	scanf("%[^\n]s", argMensaje);
	
	saludar(argMensaje)
	
	
	return 0;
}
