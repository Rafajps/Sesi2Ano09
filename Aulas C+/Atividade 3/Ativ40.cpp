#include <stdio.h>

int main() {
    int numero;
    int maior, menor;
    int primeiro = 1;

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0)
            break;

        if (primeiro) {
            maior = menor = numero;
            primeiro = 0;
        } else {
            if (numero > maior)
                maior = numero;

            if (numero < menor)
                menor = numero;
        }
    }

    if (primeiro) {
        printf("Nenhum numero valido foi informado.\n");
    } else {
        printf("Maior = %d\n", maior);
        printf("Menor = %d\n", menor);
    }

    return 0;
}