#include <stdio.h>

int main() {
    int idade;
    int quantidade = 0;
    int soma = 0;

    while (1) {
        printf("Digite uma idade (0 para parar): ");
        scanf("%d", &idade);

        if (idade == 0)
            break;

        soma += idade;
        quantidade++;
    }

    if (quantidade > 0)
        printf("Media das idades = %.2f\n", (float)soma / quantidade);
    else
        printf("Nenhuma idade informada.\n");

    return 0;
}