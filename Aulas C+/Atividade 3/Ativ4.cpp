#include <stdio.h>

int main() {
    int numero = 0;

    while (numero <= 100000) {
        printf("%d\n", numero);
        numero += 1000;
    }

    return 0;
}