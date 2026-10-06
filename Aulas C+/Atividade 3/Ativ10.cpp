#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 50; i++) {
        soma += i * 2;
    }

    printf("Soma = %d\n", soma);

    return 0;
}