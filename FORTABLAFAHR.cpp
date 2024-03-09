#include <stdio.h>


int main (){
	
	float fahr;
	float max = 300;
	printf("\nImprime la tabla de valores:\n");
	printf("\tFahrenheit\tCelsius\n");
	for(fahr = 0; fahr <= max; fahr += 20 )
		printf("\t%.3f\t\t%.3f\n", fahr, (5.0 / 9.0) * (fahr - 32));
		n
	
	return 0;
}
