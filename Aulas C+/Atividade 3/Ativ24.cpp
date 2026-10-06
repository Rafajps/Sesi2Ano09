#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            soma += i;
    }

    printf("Soma dos divisores = %d\n", soma);

    return 0;
}