#include <stdio.h>


int main(){
	
	int dia;
	printf("Proporciona dia de la semana: \n");
	scanf("%d", &dia);
	
	// en lugar de if-else se usara la estructura switch
	
	switch (dia){
		case 1: 
			printf("\nLunes");
			break;
		case 2:
			printf("\nMartes");
			break;
		case 3:
			printf("\nMiercoles");
			break;
		case 4:
			printf("\nJueves");
			break;
		case 5:
			printf("\nViernes");
			break;
		case 6:
			printf("\nSabado");
			break;
		case 7:
			printf("\nDomingo");
			break;
		default:
			printf("\nValor dia erroneo");
		
	}// Fin switch
	
	
	
	return 0;
}
