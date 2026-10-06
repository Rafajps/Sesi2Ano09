#include <stdio.h>

int main() {
    int inicio, fim, soma = 0;

    printf("Digite o inicio: ");
    scanf("%d", &inicio);

    printf("Digite o fim: ");
    scanf("%d", &fim);

    if (inicio > fim) {
        printf("Intervalo de valores invalido\n");
        return 0;
    }

    for (int i = inicio; i <= fim; i++) {
        if (i % 2 != 0)
            soma += i;
    }

    printf("Soma = %d\n", soma);

    return 0;
}