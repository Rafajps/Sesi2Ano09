#include <stdio.h>

int main() {
    int numero;
    int quantidade = 0;
    int pares = 0;

    do {
        printf("Digite um numero (1000 para parar): ");
        scanf("%d", &numero);

        if (numero != 1000) {
            quantidade++;

            if (numero % 2 == 0)
                pares++;
        }

    } while (numero != 1000);

    printf("Quantidade de dados: %d\n", quantidade);
    printf("Quantidade de pares: %d\n", pares);

    return 0;
}