#include <stdio.h>



int main(){
	
	float celsius, fahr;
	int lower = 0;
	int upper = 300;
	int step = 20;
	printf("\nImprime la tabla de Fahrenheit\n");
	printf("\tCelsius \tFahr\n");
	
	celsius = upper;
	while(celsius >= lower ){
		fahr = (9.0 / 5.0) * (celsius + 32);
		printf("\t%6.3lf\t%15.3lf\n", celsius, fahr);
		celsius -= step;
		
	}
	
	
	
	return 0;
}
