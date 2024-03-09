#include <stdio.h>
#include <unistd.h> // Para sleep en sistemas Unix

int main() {
    for (int i = 0; i <= 10; ++i) {
        printf("Contador: %d\r", i);
        fflush(stdout); // Forzar la salida para sistemas que tienen búfer de salida
        sleep(1);       // Esperar 1 segundo
    }

    printf("\n"); // Imprimir una nueva línea para separar
    return 0;
}

