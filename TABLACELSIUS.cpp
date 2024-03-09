#include <stdio.h>

/*Lo que hace este programa es interactuar con la condicion en el ciclo while, y de ahi uso del cuerpo interno de la funcion
para interactuar con la formula, hasta realizarse dato a datoy asi cumplir on la condicion y dar fin al programa cn a tabla completa*/
int main(){
	float farh, celsius;
	
	int lower = 0;
	int upper = 300;
	int step = 20;
	
	/*Este es el encabezado de la tabla ya cuando es compilada y llamada a la consola para mostrar su contenido*/
		printf("\nTabla de valores Celsius:\n");
		printf("\tCelsius \tFahr\n");
		
	/*El programa interactua con la condicion y considerando dato por dato y pasando por el contenido de la funcion, hasta cumplir
	con la impresion de los datos formulados*/
	 while(farh <= upper){
	 	celsius = 5.0 * (farh - 32.0)/9.0;// el ponerle el punto decimal reprensenta con mas exactitud al dato flotante
	 	
	 		printf("%10.0f %17.1f\n", farh, celsius); /* los numeros entre los especificadores de formato dan espacio a la sangria
			 entre los numeros deseados a imprimir, asi le da una mejor legibilidad al programa y, los numeros despues del punto
			 entre los especificadores representan la cantidad de digitos flotantes que se desea imprimir despues del punto en el
			 resultado de la operaacion, dado numeros con puntos decimales*/
	 		farh += step;
		 }
	
	return 0;
}
