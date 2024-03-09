#include <stdio.h>



int main(){
	
	int c, i, nwhite, nother;
	int ndigit[10];
	
	nwhite = nother = 0;
	for(i = 0; i < 10; ++i){
		ndigit[10];
	}
	while((c = getchar()) != EOF){
		if(c >= '0' && c <= '9'){
			++ndigit[c - '0'];
		}else if(c == ' ' || c == '\n' || c == '\t'){
			++nwhite;
		}else{
			++nother;
		}
		printf("Digitos = \n ");
		for( i = 0; i < 10; ++i){
			printf("%d", ndigit[i]);
			printf(", espacios en blanco = %d, otros =  %d", nwhite, nother);
		}
		
	}
	
	
	
	return 0;
}
