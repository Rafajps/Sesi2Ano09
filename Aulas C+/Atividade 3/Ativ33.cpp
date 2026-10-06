#include <stdio.h>

int main() {
    int n, i, j;
    int quantidade = 0;
    int numero = 0;

    printf("Digite N, I e J: ");
    scanf("%d %d %d", &n, &i, &j);

    while (quantidade < n) {
        if (numero % i == 0 || numero % j == 0) {
            printf("%d ", numero);
            quantidade++;
        }

        numero++;
    }

    return 0;
}