#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (base <= 0 || altura <= 0) {
        printf("Valores invalidos.\n");
        return 0;
    }

    area = (base * altura) / 2;

    printf("Area = %.2f\n", area);

    return 0;
}