#include <stdio.h>

int main() {
    int n;
    double soma = 0;

    printf("Digite N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    printf("H(%d) = %.6f\n", n, soma);

    return 0;
}