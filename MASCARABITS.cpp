#include <stdio.h>

unsigned int setbits(unsigned int x, int p, int n, unsigned int y);

int main() {
    unsigned int x = 0b110110101010; // Valor de x en binario
    unsigned int y = 0b10011;       // Valor de y en binario
    int p = 7;                       // Posición p (empezando desde 0)
    int n = 3;                       // Cantidad de bits n

    unsigned int resultado = setbits(x, p, n, y);

    printf("x = %u (binario: %08b)\n", x, x);
    printf("y = %u (binario: %05b)\n", y, y);
    printf("Resultado = %u (binario: %08b)\n", resultado, resultado);

    return 0;
}

unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
    // Paso 1: Crear una máscara para limpiar los bits en la posición p hasta p-n
    unsigned int mask = ~(~0 << n) << (p - n + 1);

    // Paso 2: Limpiar los bits en la posición p hasta p-n en x
    x = x & ~mask;

    // Paso 3: Desplazar los n bits más a la derecha de y a la posición p
    y = (y & ~(~0 << n)) << (p - n + 1);

    // Paso 4: Combinar x e y usando la operación OR
    return x | y;
}

