#include <stdio.h>

int main() {
    int a, b, inicio, fim;
    int soma = 0;
    long long produto = 1;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        inicio = a;
        fim = b;
    } else {
        inicio = b;
        fim = a;
    }

    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0)
            soma += i;
        else
            produto *= i;
    }

    printf("Soma dos pares = %d\n", soma);
    printf("Produto dos impares = %lld\n", produto);

    return 0;
}