#include <stdio.h>

int main() {
    double soma = 0;
    double fatorial;

    for (int i = 0; i < 5; i++) {
        fatorial = 1;

        for (int j = 1; j <= 2 * i; j++) {
            fatorial *= j;
        }

        if (i == 0)
            fatorial = 1;

        soma += (double)i / fatorial;
    }

    printf("S = %.6f\n", soma);

    return 0;
}