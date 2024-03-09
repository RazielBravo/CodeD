#include <stdio.h>

int variableGlobal = 10;
int a = 20;

void funcionA(int variable){
	variable = 40; 
	 variableGlobal = 100;
	 int a = 90; // Este es una variable local
	 
	 printf("\nImprimir variables locales en la funcion A: %d", variable);
	 printf("\nImprimir variable globlal modificada en la funcion A: %d", variableGlobal);
	 printf("\nImprimir variable local en la funcion: %d", a);
	
}
n
int main(){
	
	int variablelocal = 30;
	printf("\nImprime variable global: %d", variableGlobal);
	printf("\nImprime variable a: %d", a); // se accese a la variable desde afuera del metodo principal
	funcionA(variablelocal);
	a = 50; // Se puede cambiar el valor de las variables globales 
	
	printf("\nImprime variable principal sin retornar el valor de la funcion: %d", variablelocal);
	printf("\nImprime la variable a modificada con otro valor: %d", a);
	
	//printf("\nImprime la funcion A: %d", variablelocal);
	
	/*Tambien se puede acceder a las variables globales mediante las funciones, por eso no es recomenable utilizar demas las 
	dichas variables, asi se puede tener mejor control de todas las variables en general. */
	
	return 0;
}
