#include <stdio.h>


int main()
{
	printf("TABLA DE CELSIUS A FAHRENHEIT\n");
	float c, f;
	float lower, upper, step;
	
	lower = 300;
	upper = 0;
	step = 20;
	
	c = lower;
while (c >= upper) {
f = ((9.0/5.0 * c) + 32);
printf("%3.0f %6.1f\n", c, f);
c = c - step;
	
}
}
