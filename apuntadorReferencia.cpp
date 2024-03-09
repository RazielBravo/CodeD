#include <stdio.h>

void cambiarValor(int *apuntador){ // Se define el apuntador con asterisco
	
	*apuntador = 20; // Para poder acceder al valor por paso por refencia 
	
}

int main(){
	
	int argumento = 10;
	printf("\nSe imprime el valor antes: %d", argumento);
	printf("\nPara acceder al numero de memeria en hexadecimal: %p", &argumento); // Para acceder a la memoria
	
	cambiarValor(&argumento); // Se pasa el valor por refencia por medio del ampersan 
	printf("\nImprime el nuevo valor: %d", argumento);
	printf("\nPara ver y accceder a la misma direccion de memoria: %p", &argumento); // Para acceder a la misma memoria
	
	
	
	

	
	return 0;
}
