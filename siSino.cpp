#include <stdio.h>


int main(){
	
	
	printf("\nProporciona un numero: \n");
	int num;
	scanf("%d", &num);
	
	//(num > 0) ? printf("Valor Positivo") : printf("Valor negativo");
	
	if (num > 0){
		printf("Valor positivo: %d", num);
		
	}
	else if(num < 0){
		printf("Valor es negativo: %d", num);
	}
	else{
		printf("Valor es Cero: %d", num);
	}
	
	/*
	Operador ternario
	(num > 0) ? printf("Valor Positivo") : printf("Valor negativo");
	*/
	return 0;
}
