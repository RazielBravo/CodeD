#include <stdio.h>



int main(){
	
	float fahr;
	float min = 0;
	
	printf("\nImprime la tabla de valores de mayor a menor:\n");
	printf("\tFahrenheit\tCelsius\n");
	
	for(fahr = 300; fahr >= min; fahr -= 20)
		printf("\t%.3f\t\t%.3f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	
	return 0;
}
