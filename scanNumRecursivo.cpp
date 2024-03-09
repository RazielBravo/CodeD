#include <stdio.h>

int numRecur(int num){
	
		if(num == 1){
			printf("%d", num);
		}else{
			numRecur(num - 1);
			printf("\n%d", num);
		}
	

}

int main(){
	int num1;
	printf("Ingresa un numero entero menor a 15:");
	scanf("%d ", &num1);
	
	if(num1 <= 15){
		numRecur(num1);
	printf("\nImprime los valores en orden ascendente: %d", num1);
	}else{
		printf("\nVALOR INVALIDO!!!");
	}
	
	
	
	return 0;
}
