#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n;
    int quantidade = 0;
    int numero = 2;
    long long soma = 0;

    printf("Digite N: ");
    scanf("%d", &n);

    while (quantidade < n) {
        if (ehPrimo(numero)) {
            soma += numero;
            quantidade++;
        }

        numero++;
    }

    printf("Soma = %lld\n", soma);

    return 0;
}