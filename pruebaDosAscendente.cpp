#include <stdio.h>
/*Recursividad*/

int retorno(int num){
	if(num == 1){
		printf("%d\n", num);
	}else{
		retorno(num - 1);
		printf("%d\n", num);
	}
}

int main(){
	
	int num1;
	printf("\nEscribe un numero entero menor o igual a 15:");
	scanf("%d", &num1);
	
	if(num1 != EOF && num1 >= 16){
		printf("\nNUMERO INVALIDO");
	
	}else {
	retorno(num1);
	
	
	}/*if(num1 >=16){
		printf("\nNUMERO INVALIDO!");
	}else{
	//printf("Proporciona otro numero");
	*/
	
	
	
	return 0;
}
