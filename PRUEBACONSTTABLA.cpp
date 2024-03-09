#include <stdio.h>
/*El uso de las variables constantes no aparece en las declaraciones como en otras declaraciones de variables, se define por fuera
y es preferible nombrarlas en MAYUSCULAS para exceptuarlas de las demas variables, la declaracion de las constantes, logra darle
mas legibilidad a los programas, asi como la mofidificacion mas efectiva de los valores si es que se requiere mas adelante segun
lo necesite el prorgrama deseado */

/*Imprime la tabla de fahrenheit anterior definiendo las variables constantes*/

#define LOWER 0
#define UPPER 300	// ya no es necesario agregar el punto y coma al terminar la linea con las variables constantes
#define STEP 20

int main(){
	
	float fahr;
	printf("\nImprime la Tabla de temperaturas Fahr - Celsius:\n");
	printf("\tFahrenheit\tCelsius\n");
	
	for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("\t%.3f\t\t%.3f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	
	
	return 0;
}
