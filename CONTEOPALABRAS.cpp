#include <stdio.h>

#define IN 1// Se definen constantes para hcaer mas legible el programa y por buena practica
#define OUT 0	// Tambien es mas legible poner constantes que los valores literales 1 y 0. IN - 1, OUT - 0.
	//state = OUT; // Se usa para OUT para saber si esta dentro de una palabra
int main(){
	
	int c, nl, nw, nc, state;
	
	
	nl = nw = nc = 0;
	state = OUT;
	
	while ((c = getchar()) != EOF){
		++nc;
		if(c == '\n'){
			++nl;
			}
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			}else if (state == OUT){
				state = IN;
				++nw;
			}
		
			
			
		
		
	}
	
	
	
	printf("Nuevas lineas: %d, Carateres: %d, Palabras: %d\n", nl, nc, nw);		
	
	return 0;
}
