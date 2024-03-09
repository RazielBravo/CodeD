#include <stdio.h>
/*Programa para insertar los datos requeridos para la conversion de temperaturas, usando el metodo de funcion*/
float celsius(float fahr){
	
	/*float resultado;
	
	resultado = (5.0 / 9.0) * ( fahr - 32.0);*/
	
	return (5.0 / 9.0) * ( fahr - 32.0); /*Recordaar que la expresion puede bien asignarse directamente al retorno, y resultar de 
	la misma manera*/
	
}

int main(){
	
	float resultado, a;
	printf("\nEscribe los grados Celsius para convertir a Fahrenheit: \n");
	scanf("%f", &a);
	
	resultado = celsius(a);
	printf("\nEl resultado de %.3f C a Fahrenheit es: %.3f", a, resultado);
	
	return 0;
}
