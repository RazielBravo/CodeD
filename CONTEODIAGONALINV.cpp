#include <stdio.h>


int main(){
	
	int c;
	
	while((c = getchar()) != EOF){
		if(c == '\\'){	
			printf("\nInserto: ''");
		}
		putchar(c);
	}
	
	return 0;
}
