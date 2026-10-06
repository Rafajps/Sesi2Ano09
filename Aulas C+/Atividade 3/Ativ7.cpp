#include <stdio.h>

int main() {
    int valor, soma = 0, quantidade = 0;
    float media;

    while (quantidade < 10) {
        printf("Digite um numero positivo: ");
        scanf("%d", &valor);

        if (valor > 0) {
            soma += valor;
            quantidade++;
        }
    }

    media = soma / 10.0;

    printf("Media = %.2f\n", media);

    return 0;
}