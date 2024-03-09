#include <stdio.h>

/*Diferentes formas para entrada de valores con usuario, 
corrigiendo la entrada del espaciado cuando se intrucen los datos */


int main(){
	int longCadena = 30;
	char nombre[longCadena];
	
	printf("Escribe tu nombre:\n");
	//scanf("%[^'\n']s", nombre);
	//fgets(nombre, longCadena, stdin);
	gets(nombre);
	
	printf("\nTu nombre es: %s ", nombre);
	
	return 0;
}
