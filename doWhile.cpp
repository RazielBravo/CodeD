#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int numero;
	bool condicion;
	
	do{
		printf("\nProporcione un numero positivo:");
		scanf("%d", &numero);
		condicion = numero > 0; // va a ser verdad hasta qu el dato proporcionado halla sido positivo
		
		}while (!condicion); // se puede invertir la condicion psrs decir mientras que se lo contrario a la condicion real caera en un ciclo do-while
		
		printf("\nValor positivo proporcionado: %d", numero);
	
	 
	return 0;
}
