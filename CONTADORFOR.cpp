#include <stdio.h>



int main(){
	
	double c;
	
	for(c = 0; getchar() != EOF; ++c)
		/* En libro viene marcada un punto y coma solo en esta linea, definiendo con proposicion nula por falta del cuerpo 
		en el ciclo for*/
		printf("\n%.0f", c);
	
	
	
	
	
	return 0;
}
