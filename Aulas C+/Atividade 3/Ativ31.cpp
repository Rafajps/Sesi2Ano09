#include <stdio.h>

int main() {
    double soma = 0;

    for (int i = 1; i <= 50; i++) {
        soma += (2.0 * i - 1) / i;
    }

    printf("S = %.2f\n", soma);

    return 0;
}