#include <stdio.h>

int main() {
    int numero, menor, maior;

    for (int i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (i == 1) {
            menor = numero;
            maior = numero;
        } else {
            if (numero < menor)
                menor = numero;

            if (numero > maior)
                maior = numero;
        }
    }

    printf("Menor = %d\n", menor);
    printf("Maior = %d\n", maior);

    return 0;
}