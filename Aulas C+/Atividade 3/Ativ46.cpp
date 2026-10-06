#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int segredo, tentativa;
    int tentativas = 0;

    srand(time(NULL));

    segredo = rand() % 1000 + 1;

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &tentativa);

        tentativas++;

        if (tentativa < segredo)
            printf("O numero e maior.\n");
        else if (tentativa > segredo)
            printf("O numero e menor.\n");
        else
            printf("Acertou!\n");

    } while (tentativa != segredo);

    printf("Tentativas: %d\n", tentativas);

    return 0;
}