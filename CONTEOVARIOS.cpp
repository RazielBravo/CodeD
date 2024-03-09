#include <stdio.h>

#define IN 1  // Definimos IN como 1
#define OUT 0 // Definimos OUT como 0

int main() {
    int c, nl, nw, nc, state;

    nl = nw = nc = 0; // Inicializamos las variables
    state = OUT;     // Inicializamos state como OUT

    while ((c = getchar()) != EOF) {
        ++nc; // Incrementamos el contador de caracteres

        if (c == '\n') {
            ++nl; // Incrementamos el contador de l�neas
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT; // Cambiamos el estado a OUT si encontramos espacio, salto de l�nea o tabulaci�n
        } else if (state == OUT) {
            state = IN; // Cambiamos el estado a IN si encontramos un car�cter no espaciado despu�s de un espacio, salto de l�nea o tabulaci�n
            ++nw;       // Incrementamos el contador de palabras
        }
    }

    printf("L�neas: %d, Caracteres: %d, Palabras: %d\n", nl, nc, nw);

    return 0;
}

