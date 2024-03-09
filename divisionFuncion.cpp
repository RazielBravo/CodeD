#include <stdio.h>

double division(double a, double b){
	double resultado = a / b;
	
	return resultado;
}


int main(){
	
	double aa, bb;
	double resultado;
	
	printf("\nEscribe el primer numero:");
	scanf("%lf", &aa);
	printf("\nEscribe el segundo numero:");
	scanf("%lf", &bb);
	
	resultado = division(aa, bb);
	double *apuntador = &resultado;
	
	printf("\nEl resultado de la division es: %lf", resultado);
	printf("\nLa direccion en memoria: %p", &resultado);
	printf("\nLa direccion forma puntero: %p", apuntador); /* ya no se le agrega el ampersan o asterisco para ver la direccion en memoria*/
	printf("\nEl valor de nuevo por puntero: %lf", *apuntador);
	
	*apuntador = 20;
	printf("\nSe  muestra el nuevo valor modificado : %lf", resultado);
	printf("\nEl nuevo valor modificado por apuntador: %lf", *apuntador); /* El valor se puede modificar directamente con el apuntador a la variable que se desea cambiar*/
	
	return 0;
}
