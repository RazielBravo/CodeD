#include <stdio.h>
#define RENGLONES 2
#define COLUMNA 3

int main(){
	
	int matriz [RENGLONES][COLUMNA] = {{100, 200, 300},{400, 500, 600}};
	

	for(int ren = 0; ren < RENGLONES; ren++){
		printf("Valor del reglon pivote: %d", ren);
		for(int col = 0; col < COLUMNA; col++){
		printf("\nMatriz[%d][%d] = %d", ren, col, matriz[ren][col]);
		
			}	
		printf("\n");
	
		}	
	
	
	return 0;
}
