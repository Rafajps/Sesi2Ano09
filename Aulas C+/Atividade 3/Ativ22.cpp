#include <stdio.h>

int main() {
    float nota, soma = 0;
    int quantidade = 0;

    while (1) {
        printf("Digite uma nota entre 10 e 20: ");
        scanf("%f", &nota);

        if (nota < 10 || nota > 20)
            break;

        soma += nota;
        quantidade++;
    }

    if (quantidade > 0)
        printf("Media = %.2f\n", soma / quantidade);
    else
        printf("Nenhuma nota valida foi informada.\n");

    printf("Quantidade de notas = %d\n", quantidade);

    return 0;
}