#include <stdio.h>

int main() {
    double carlos, joao;
    double taxaCarlos, taxaJoao;
    int meses = 0;

    printf("Salario de Carlos: ");
    scanf("%lf", &carlos);

    joao = carlos / 3;

    printf("Taxa mensal de Carlos (%%): ");
    scanf("%lf", &taxaCarlos);

    printf("Taxa mensal de Joao (%%): ");
    scanf("%lf", &taxaJoao);

    while (joao < carlos) {
        carlos += carlos * taxaCarlos / 100;
        joao += joao * taxaJoao / 100;
        meses++;
    }

    printf("Joao alcancara Carlos em %d meses.\n", meses);
    printf("Carlos: %.2f\n", carlos);
    printf("Joao: %.2f\n", joao);

    return 0;
}