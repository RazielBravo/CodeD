#include <stdio.h>
#include <ctype.h>

int htoi(const char *s);

int main() {
    char hexString[] = "0x1A"; // Cambia la cadena a la que desees convertir

    int result = htoi(hexString);
    printf("Valor entero equivalente: %d\n", result);

    return 0;
}

int htoi(const char *s) {
    int result = 0;
    int i = 0;

    // Opcionalmente, manejar el prefijo "0x" o "0X"
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2; // Saltar el prefijo
    }

    while (s[i] != '\0') {
        char c = tolower(s[i]); // Convertir a min�sculas para manejar d�gitos hexadecimales may�sculos
        if (isdigit(c)) {
            result = result * 16 + (c - '0');
        } else if (c >= 'a' && c <= 'f') {
            result = result * 16 + (c - 'a' + 10);
        } else {
            // Car�cter no v�lido en una cadena hexadecimal
            printf("Car�cter no v�lido: %c\n", c);
            return -1; // Otra acci�n adecuada, como manejar el error
        }
        i++;
    }

    return result;
}

