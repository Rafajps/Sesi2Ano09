#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    numero++;

    while (numero % 11 != 0 &&
           numero % 13 != 0 &&
           numero % 17 != 0) {
        numero++;
    }

    printf("Primeiro multiplo encontrado: %d\n", numero);

    return 0;
}