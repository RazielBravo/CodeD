#include <stdio.h>

float fahr(float celsius){
	/*Para ahorarrse algunas lineas, el return podira contener la expresion directamente para su llamada*/
	return ((9.0 / 5.0) * (celsius)) + 32.0;
}

int main(){
	float conver, resultado;
	printf("\nEscribe el numero Celsius para convertir a Fahranheit: \n");
	scanf("%f", &conver);
	
	resultado = fahr(conver);
	
	printf("\nLa conversion de %.3f celsius a Fahrenheit es: %.3f", conver, resultado);
	
	
	return 0;
}
