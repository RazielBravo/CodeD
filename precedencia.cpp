#include <stdio.h>

int main (){
	
	



// precedencia de operadores
/*
1. Parentesis y corchetes
2. Operadores unitarios como -, ++,--,!
3. Aritmeticos *, / y %
4. Aritmeticos + y -
5. Relacionales <, >,<=, >=
6. Igualdad == y !=
7. Logicos && y ||
8. Asignacion =, =+, -=, *=, etc
*/ // y las expresiones se analizan de izquierda derecha 

int a = 12 / 3 + 2 * 3 -1;
/*
1. Division 12 /3 = 4
2. Multiplicacion 2*3 = 6
3. Suma 4 + 6 = 10
4. Resta 10 -1;
*/
printf("\nResultado: %d", a);



}
