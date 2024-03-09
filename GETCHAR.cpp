#include <stdio.h>


int main(){
	
	int c;
	
	c = getchar();
	
	while(c != EOF){ // END OF FILE, FIN DEL ARCHIVO, constante simbolica definida en la biblioteca estandar,para asegurar que no dependa del valor queq se esea insertar
		putchar(c);
		
	c = getchar();
		
	}
		
	
	
	return 0;
}
