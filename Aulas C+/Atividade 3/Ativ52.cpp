#include <stdio.h>

int main() {
    int valor;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    for (int i = 0; i < 7; i++) {
        int quantidade = valor / notas[i];

        if (quantidade > 0) {
            printf("%d nota(s) de R$ %d\n", quantidade, notas[i]);
            valor %= notas[i];
        }
    }

    return 0;
}