#include <stdio.h>

int main(){
	// operadores de incremento y decremento
	//operadores de incremento: preincremento y postincremnto
	int a, b, c;
	
	a= 0;
	a++; // incrementa la proxima vez que utilicemos esta variable 
	printf("\nNuevo valor de a: %d", a);
	
	//preincremento 
	++a; // se incrementa esta variable desde esta misma linea y ya tenia el valor del incremnto
	printf("\nNuevo valor de a: %d", a);
	
	a = 5;
	b = 2;
	c = ++a * b++;
	
	printf("\nValor a: %d", a);// No tenia ningun incremento pendiente
	printf("\nValor b: %d", b);// Si tenia un incremento pendiente
	printf("\nValor c: %d", c);
	
	//predecremento y postdecremento
	
	a = 5;
	b = 2;
	c = --a * b--;
	
	printf("\nValor a: %d", a);// No tenia ningun decremento pendiente
	printf("\nValor b: %d", b);// si tenia un decremento pendiente
	printf("\nValor c: %d", c);
	
	
	return 0;
}
