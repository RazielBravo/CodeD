#include <stdio.h>

/*El sistema a traves de la instruccion getchar obtiene el valor desde el teclado y lo repite a su regreso o a la salida a consola,
haciendo que*/

int main(){
	
	int c;
	
	
	while((c = getchar()) != EOF){ /*Este es un programa con la linea de entrada estadar en la biblioteca, recortada a menos lineas,
	con el mismo efecto, tambien la condicion u operador no igual a (!=) tiene mayor jerarquia de operacion asi que primero se ejecuta
	este operador para confirmar que la entrada sea correcta de lo contrario se repite el estado para ingresar datos desde el teclado*/
		
		/*printf("\nEl valor de EOF: %d", EOF);
		printf("\nValor true o false: %d", EOF);*/
	
		putchar(c);
	
	
	}
	
	return 0;
}
