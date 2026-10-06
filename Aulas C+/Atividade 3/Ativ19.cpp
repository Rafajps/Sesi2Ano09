#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero entre 100 e 999: ");
    scanf("%d", &numero);

    printf("Centena: %d\n", numero / 100);
    printf("Dezena: %d\n", (numero / 10) % 10);
    printf("Unidade: %d\n", numero % 10);

    return 0;
}