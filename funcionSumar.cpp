#include <stdio.h>

int sumar(int argA, int argB){
	int resultadoParcial = argA + argB;
	return resultadoParcial;
}
int multiplicar(int a, int b){
	int resultado = a * b;
	return resultado;
}

int main(){
	int a, b, resultado;
	printf("\nProporciona el primer valor a sumar:");
	scanf("%d", &a);
	
	printf("Proporciona el segundo valor a sumar:");
	scanf("%d", &b);
	
	resultado = sumar(a, b);
	printf("El resultado de la suma: %d\n", resultado);
	resultado = multiplicar(a, b);
	printf("El resultado de la multiplicacion: %d\n", resultado);
	
	return 0;
}
