#include <stdio.h>

int main() {
    for (int numero = 1000; numero <= 9999; numero++) {
        int parte1 = numero / 100;
        int parte2 = numero % 100;
        int soma = parte1 + parte2;

        if (soma * soma == numero)
            printf("%d\n", numero);
    }

    return 0;
}