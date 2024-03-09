#include <stdio.h>
#include <stdbool.h>
int main(){
	int miNumero;
	
	miNumero = 10;
	/* Los comentarios son importantes para darle mas legibilidad al programa*/
	printf("El numero es: %d", miNumero);
	
	/*Tipos de datos en c */
	
	int numEntero = 8; // Representa numeros ENTEROS 
	printf("\nEl numero es: %d", numEntero); // Con le %d o %i mandas a imprimir el valor dado para dato int
	
	float flotante = 8.5; // Representa numeros con punto decimal 
	printf("\nEl numero es: %f", flotante); /*placeholder o marcador de posicion %f*/
										// puede determinarse el numero de digitos despues del punto
										// quedando en medio del placeholder ejem. %.3f,%.4 ...
	
	double doble = 3526.2325; // Representa numeros con mayor rango en digitos 
	printf("\nEl numero doble es; %.3lf", doble); // maracador %lf y puede representarse los valores deseados
	
	char caracter = 'A'; //Representa un solo caracter en el sistema ASCII
	printf("\nEl caracter es: %c", caracter); //Marcador %c
	printf("\nEl numero en decimal ASCII: %d", caracter); // Marcador para imprimir el numero decimal que representa 
	
	bool booleano = false; // Puedes mandar a imprimir un numero booleano es a decimal
	printf("\nEl Resultado (0- FALSE , 1 - TRUE ): %d", booleano); // indentificador %d para representar el decimal
	
	char cadena[] = "Mi cadena"; // \0 tiene un valor invisible NULL, arreglo debe ser = o > a la cadena, nunca menor
	printf("\nLa cadena a imprimir es: %s", cadena); // Identificador %s para cadenas 
	
	//Para mostrar la direccion de memoria - pointer
	
	int num1 = 12;
	printf("\nEl valor deciaml es:", num1);
	printf("\nLa direccion de la memoria es: %p", &num1); // Marcador como %p (pointer), y el ampersand & antes del nombre de la variable
	//NOTA: LOS ARREGLOS SE PASAN POR REFERENCIA
	
	
	// Para escanear un numero o pedirselo al usuario 
	
	int longCadena = 35;
	char nombre[longCadena];
	
	printf("\nAgrega un numero:\n");
	
	scanf("%d", &num1);
	printf("\nEl numero proporcionado es: %d", num1);
	
	printf("\nEscribe tu nombre:");
	scanf("%[^'\n']s", nombre); //Para este tipo de formato no es necesario agregar &, ya que solo es a los datos primitivos
							// Se debe agregar [^'\n'] para leer lo introducido correctamente
							// O se puede agregar 
	//fgets(nombre, longCadena, stdin);
	//gets(nombre);
	printf("Tu nombre es: %s", nombre);
	return 0;
}
