#include <stdio.h>

int main() {
    int valor, soma = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d valor: ", i);
        scanf("%d", &valor);

        soma += valor;
    }

    printf("Soma = %d\n", soma);

    return 0;
}