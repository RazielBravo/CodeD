#include <stdio.h>

#define MAX_CHAR 256 // Suponemos un rango de caracteres ASCII extendido

int main() {
    int c;
    int charFrequency[MAX_CHAR] = {0}; // Inicializamos el array de frecuencias a 0

    while ((c = getchar()) != EOF) {
        if (c >= 0 && c < MAX_CHAR) {
            ++charFrequency[c]; // Incrementamos la frecuencia del carácter leído
        }
    }

    // Imprimir el histograma de frecuencias
    printf("Histograma de frecuencias de caracteres:\n");
    for (int i = 0; i < MAX_CHAR; ++i) {
        if (charFrequency[i] > 0) {
            printf("%c (%3d): ", i, i);
            for (int j = 0; j < charFrequency[i]; ++j) {
                putchar('*');
            }
            putchar('\n');
        }
    }

    return 0;
}

