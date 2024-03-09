#include <stdio.h>


int main(){
	int renglones, columnas;
	
	printf("\nProporciona el tamanio de los reglones: ");
	scanf("%d", &renglones);
	
	printf("\nProporciona el tamanio de las columnas: ");
	scanf("%d", &columnas);
	
	int matriz[renglones][columnas];
	
	for(int ren = 0; ren < renglones; ren++){
		for(int col = 0; col < columnas; col++){
			printf("Proporciona los datos de los reglones y columnas : matriz[%d][%d] = ", ren, col);
			scanf("%d", &matriz[ren][col]);
			
		}
	}
	
	for(int ren = 0; ren < renglones; ren++){
		for(int col = 0; col < columnas; col++){
		
		printf("\nLos datos almacenados en la matriz  son: Dato [%d][%d] = %d", ren, col, matriz[ren][col]);
		
		
	}
	printf("\n");
	
	}
	
	return 0;
}
