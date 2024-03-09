#include <stdio.h>



int main(){
	
	float celsius;
	float fahr;
	
	
	printf("\nIngresa los grados Celsius para convertir a Fahrenheit:\n");
	scanf("%f", &celsius);
	
	fahr = (((9.0/5.0) * (celsius)) + 32.0);
	
	printf("\nLos grados celsius: %f - Fahrenheit: %f", celsius, fahr);
	
	return 0;
} 
