#include <stdio.h>

char Lower(char c);

int main() {
    char uppercase = 'A';
    char lowercase = Lower(uppercase);

    printf("Letra en mayúscula: %c\n", uppercase);
    printf("Letra en minúscula: %c\n", lowercase);

    return 0;
}

char Lower(char c) {
    return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}

