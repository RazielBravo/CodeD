#include <stdio.h>
// algoritmo mayor de edad

int main(){
	const int EDAD_ADULTO = 18;
	int edadPersona;
	
	printf("Proporciona tu edad: \n");
	scanf("%d", &edadPersona);
	
	if(edadPersona >= EDAD_ADULTO){
		printf("Tienes %d anios eres un adulto", edadPersona);
		
	}
	else{
		printf("Tienes %d eres menor de edad", edadPersona);
	}
	

	return 0;
}
