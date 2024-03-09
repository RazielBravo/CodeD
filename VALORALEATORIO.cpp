#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int minimo = 100, maximo = 200;
	
	srand(time(0));
	
	int valorale = rand()%100;
	
	printf("imprime un valor aleatorio: %d\n", valorale);
	
	valorale = rand()%(maximo-minimo) + minimo;
	printf("Imprime un valor entre 100 a 200: %d\n", valorale);
	
	
	
	
	return 0;
}
