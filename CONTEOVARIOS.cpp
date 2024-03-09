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
            ++nl; // Incrementamos el contador de líneas
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT; // Cambiamos el estado a OUT si encontramos espacio, salto de línea o tabulación
        } else if (state == OUT) {
            state = IN; // Cambiamos el estado a IN si encontramos un carácter no espaciado después de un espacio, salto de línea o tabulación
            ++nw;       // Incrementamos el contador de palabras
        }
    }

    printf("Líneas: %d, Caracteres: %d, Palabras: %d\n", nl, nc, nw);

    return 0;
}

