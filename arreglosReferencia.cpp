#include <stdio.h>

void cambiarvalor(int argumento[]){ /*Para evitar el uso de corchetes se puede emplear el metodo de apuntador
agragando el asterisco antes del nombre del arreglo, asi de las  dos maneras es posible trabajar con arreglos por que
se comportan como apuntadores ya que se pasa la refencia de su primer elemento del arreglo y no el valor
ejemplo: int *argumento */

	argumento[0] = 4;
	argumento[1] = 5;
	argumento[2] = 6;
	
	}


int main(){
	/*Para arreglos con paso referencia*/
	
	int arg[] = {1, 2, 3};
	printf("\nSe imprimen los valores antes de ser cambiados: %d, %d, %d", arg[0], arg[1], arg[2]);
	
	cambiarvalor(arg);
	printf("\nSe manda a imprimir los nuevos valores cambiados por refrencia de arreglos: %d, %d, %d", arg[0], arg[1], arg[2]);

	
	
	
	return 0;
}
