#include <stdio.h>

void numsRecursivos(int num);

int main(){
	
	int num1 = 5;
	numsRecursivos(num1);
	
	
	return 0;
}

// tambien se puede definir el cuerpo de la funcion fuera de la funcion, como en este caso 

void numsRecursivos(int num){ /*En este programa se hace uso de una sintaxis que al pasar el pasar el valor por el condicional, 
no cumple su condicion y pasa al siguiente paso que es volver a llamas a la funcion para restarle uno al valor de la variable principal
y asi evaluar uno a uno hasta llegar a la condicion verdadera y asi imprimir los valores de forma ascendete*/

	if(num == 1){ // no se cumplio la primera condicion con la llamada de la variable
	
		printf("%d\n", num); // esta linea imprimi el valor de 1 al cumplirse la condicion
		
	}else{
		numsRecursivos(num - 1); /*al no cumplirse la condicion vuelve a llamar a la funcion y el parametro es reducido en uno
		para interactuar con la memoria hasta cumplir con la primera condicion 1*/
		
		printf("%d\n", num); /* esta linea imprime los siguientes valores despues de uno al ir eliminandolos de su memoria, si esta 
		linea se pone por arriba de la llamada a la funcion en la segunda condicion en programa imprimiria los numeros de manera 
		descendente o inversamente*/
	}
}
