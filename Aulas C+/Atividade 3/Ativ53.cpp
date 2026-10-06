#include <stdio.h>

int main() {
    int n;
    int numero = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for (int linha = 1; linha <= n; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", numero);
            numero++;
        }

        printf("\n");
    }

    return 0;
}