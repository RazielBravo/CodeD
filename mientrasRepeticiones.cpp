#include <stdio.h>
#include <stdbool.h>

int main(){
	 
	 int contador = 1, repeticiones = 5;
	 
	 bool condicion;
	 
	 while (contador <= repeticiones){
	 	
	 	printf("\nTodas las veces que quieras .. %d\n", contador);
	 	
		contador++; // postincremento
		
		condicion =	contador <= repeticiones; // Para ver la iteracion del codigo paso a paso
		printf("%d < %d -- %d\n", contador, repeticiones, condicion);
		
	 }
	
	printf("\nAqui estamos fuera del ciclo while");
	
	
	
	return 0;
}
