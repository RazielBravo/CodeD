#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b, c, e, f;
	float d;
	
	a = 3 +4;
	printf("\nValor de a:%d", a);
	
	b = 6 - 2;
	printf("\nValor de b: %d", b);
	
	c = a * 2;
	printf("\nValor de c: %d", c);
	
	d = b / 2.5;
	printf("\nValor de: %.2f", d);
	
	f = 9 % 3; 
	printf("\nResiduo: %d", f);
	
	e = pow(a, 2); // funcion pow para elevar a la potencia, incluida en la liberia math
	printf("\nPotencia: %d", e);
	
	return 0;
}
