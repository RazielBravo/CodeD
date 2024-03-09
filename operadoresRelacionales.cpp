#include <stdio.h>


int main(){
	
	int a = 5;
	int b = 6;
	bool c;
	
	printf("\nValor de a: %d", a);
	printf("\nValor de b: %d", b);
	
	c = a == b;
	printf("\n a es igual que b?: (si/1, no/0): %d", c);
	
	c = a != b;
	printf("\n a es distinto que b?: (si/1, no/0): %d", c);
	
	c = a > b;
	printf("\n a es mayor que b?: %d", c);
	
	c = a >= b;
	printf("\n a es mayor o igual que b?: %d", c);
	
	c = a < b;
	printf("\n a es menor que b?: %d", c);
	
	c = a <= b;
	printf("\n a es menor o igual que b?: %d",c);
	
	
	
	
	return 0;
}
