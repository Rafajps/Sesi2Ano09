#include <stdio.h>

int main() {
    float r1, r2, resistencia;

    do {
        printf("Digite R1: ");
        scanf("%f", &r1);

        printf("Digite R2: ");
        scanf("%f", &r2);

        if (r1 != 0 && r2 != 0) {
            resistencia = (r1 * r2) / (r1 + r2);
            printf("Resistencia equivalente = %.2f\n", resistencia);
        }

    } while (r1 != 0 && r2 != 0);

    return 0;
}