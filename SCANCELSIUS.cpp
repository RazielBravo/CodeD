#include <stdio.h>


int main(){
	
	float fahr;
	float celsius;
	
	printf("\nEscribe el numero Fahrenheit para convertir a Celsius:\n");
	scanf("\n%f", & fahr);
	
	celsius = (5.0 / 9.0) * (fahr - 32);
	
	printf("\nLos grados Fahrenheit: %f - Celsius: %f", fahr, celsius);
	
	
	return 0;
}
