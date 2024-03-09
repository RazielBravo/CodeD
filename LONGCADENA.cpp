#include <stdio.h>
#include <string.h>




int main(){
	
	char cadena[] = "Hola";
	printf("Imprime cadena: %s\n", cadena);
	
	printf("Imprime tamanio de cadena: %d", strlen(cadena));
	
	for(int i = 0; i < strlen(cadena); i++){
		printf("\n%c", cadena[i]);
	}
	
	
	
	
	
	return 0;
}
