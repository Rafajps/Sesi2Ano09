#include <stdio.h>

int main() {
    int quantidade, numero, maior, contador = 0;

    printf("Quantos numeros serao digitados? ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (i == 1 || numero > maior) {
            maior = numero;
            contador = 1;
        } else if (numero == maior) {
            contador++;
        }
    }

    printf("Maior = %d\n", maior);
    printf("Quantidade de vezes = %d\n", contador);

    return 0;
}