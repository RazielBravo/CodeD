#include <stdio.h>
#include <stdbool.h>




int main (){
	
	bool a = true;
	bool b = false;
	bool c;
	
	printf("\nValor a: %d", a);
	printf("\nValor b: %d", b);
	
	c = a && b;
	printf("\nResultado operador AND: %d", c);
	
	c = a || b;
	printf("\nResultado operador OR: %d", c);
	
	c = !a;
	printf("\nResultado operador NOT: %d", c);
	
	c = a ^ b; // OPERADOR XOR
	printf("\nResultado operador XOR: %d", c);
	
	
	
	
	
	
	return 0;
}
