#include <stdio.h>

int main() {
    int valor, soma = 0;
    float media;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d valor: ", i);
        scanf("%d", &valor);

        soma += valor;
    }

    media = soma / 10.0;

    printf("Media = %.2f\n", media);

    return 0;
}