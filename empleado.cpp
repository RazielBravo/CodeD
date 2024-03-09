#include <stdio.h>
#include <stdbool.h>

int main(){
	int edad;
	bool empleadoConf;
	int empleadoConfTemp;
	int longCadena = 50;
	char nombreComp[longCadena];
	float sueldo;
	
	//Solcitar los valores al usuario
	
	printf("Proporciona tu nombre completo:\n");
	scanf("%[^'\n']s", nombreComp);
	printf("Proporciona tu edad:\n");
	scanf("%d", &edad); // Poner ampersand para tipo de dato primitivo
	printf("Proporciona tu sueldo:\n", sueldo);
	scanf("%f", &sueldo);
	printf("Eres empleado de confianza? (SI=1, NO=2):\n");
	scanf("%d", &empleadoConfTemp);
	empleadoConf = empleadoConfTemp;
	
	printf("\nLa informacion proporcionada es:");
	
	printf("\n Tu nombre es: %s", nombreComp);
	printf("\n Tu edad es: %d", edad);
	printf("\n Tu sueldo: %f", sueldo);
	printf("\n Empleado de confianza: %d", empleadoConf);
	
	
	
	
	
	
	
	
	return 0;
}
