#include <stdio.h>
#include <string.h>

int strlen(char s[]) {
	
	int i;
	
	i = 0;
	while(s[i] != '\0'){
		++i;
		return i;
	}
	
	}

int main(){
	
	int a;
	int resultado;
	printf("\nEscribe tu texto: \n");
	scanf("%d", &a);
	
	resultado = strlen(char s[]);
	printf("%d", resultado);
	
	
	
}
