#include <stdio.h>


int main(){
	int diaSemana;
	printf("Proporciona un dia de la semana: \n");
	scanf("%d", &diaSemana);
	
	if(diaSemana == 1)
	printf("\nLunes");
	else if(diaSemana == 2)
	printf("\nMartes");
	else if(diaSemana == 3)
	printf("\nMiercoles");
	else if(diaSemana == 4)
	printf("\nJueves");
	else if(diaSemana == 5)
	printf("\nViernes");
	else if(diaSemana == 6)
	printf("\nSabado");
	else if(diaSemana == 7)
	printf("\nDomingo");
	else
	printf("\nNo existe tal dia!");
	
	
	return 0;
}
