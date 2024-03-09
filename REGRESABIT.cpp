#include <stdio.h>

unsigned int rightrot(unsigned int x, int n);

int main() {
    unsigned int x = 0b110110101010; // Valor de x en binario
    int n = 3;                       // Cantidad de posiciones a rotar

    unsigned int resultado = rightrot(x, n);

    printf("x = %u (binario: %08b)\n", x, x);
    printf("Resultado = %u (binario: %08b)\n", resultado, resultado);

    return 0;
}

unsigned int rightrot(unsigned int x, int n) {
    int bits = sizeof(x) * 8; // Cantidad total de bits en un entero sin signo
    n %= bits; // Asegurarse de que n esté en el rango válido

    // Paso 1: Extraer los n bits más a la derecha de x
    unsigned int rightmost_n = x & ((1u << n) - 1);

    // Paso 2: Rotar x a la derecha n posiciones
    x >>= n;

    // Paso 3: Colocar los bits extraídos al principio
    x |= (rightmost_n << (bits - n));

    return x;
}

