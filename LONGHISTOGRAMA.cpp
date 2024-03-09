#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORD_LENGTH 20 // Suponemos una longitud máxima de palabra de 20 caracteres

int main() {
    int c, state, length;
    int wordLengths[MAX_WORD_LENGTH]; // Array para almacenar las longitudes de las palabras

    state = OUT;
    length = 0;

    for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
        wordLengths[i] = 0; // Inicializamos todas las longitudes a 0
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (length > 0 && length <= MAX_WORD_LENGTH) {
                ++wordLengths[length - 1]; // Incrementamos el contador de palabras de la longitud correspondiente
            }
            length = 0;
        } else {
            state = IN;
            ++length;
        }
    }

    // Imprimir el histograma vertical
    printf("Histograma de longitudes de palabras:\n");
    for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
        printf("%2d: ", i + 1);
        for (int j = 0; j < wordLengths[i]; ++j) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}

