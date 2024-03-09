#include <stdio.h>


int main(){
	
	int c;
	
	while((c = getchar()) != EOF){
		if(c == '\t'){
			printf("\nInserto: '\\t'");
		}
		putchar(c);
	}
	
	
	return 0;
}
