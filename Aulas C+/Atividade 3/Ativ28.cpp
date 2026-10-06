#include <stdio.h>

int main() {
    int n;
    double soma = 1.0;
    double fatorial = 1.0;

    printf("Digite N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
        soma += 1.0 / fatorial;
    }

    printf("E = %.6f\n", soma);

    return 0;
}