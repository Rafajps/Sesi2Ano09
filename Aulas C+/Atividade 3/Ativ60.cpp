#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int quantidade = 0;
    int maior = 0;
    int menor = 0;
    int somaPares = 0;
    int quantidadePares = 0;

    while (1) {
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &numero);

        if (numero == 0)
            break;

        soma += numero;
        quantidade++;

        if (quantidade == 1) {
            maior = menor = numero;
        } else {
            if (numero > maior)
                maior = numero;

            if (numero < menor)
                menor = numero;
        }

        if (numero % 2 == 0) {
            somaPares += numero;
            quantidadePares++;
        }
    }

    if (quantidade > 0) {
        printf("Soma = %d\n", soma);
        printf("Quantidade = %d\n", quantidade);
        printf("Media = %.2f\n", (float)soma / quantidade);
        printf("Maior = %d\n", maior);
        printf("Menor = %d\n", menor);

        if (quantidadePares > 0)
            printf("Media dos pares = %.2f\n",
                   (float)somaPares / quantidadePares);
        else
            printf("Nenhum numero par.\n");
    }

    return 0;
}