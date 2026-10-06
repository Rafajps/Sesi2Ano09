#include <stdio.h>
#include <math.h>

int main() {
    double numero;

    while (1) {
        printf("Digite um numero: ");
        scanf("%lf", &numero);

        if (numero <= 0)
            break;

        printf("Quadrado: %.2f\n", numero * numero);
        printf("Cubo: %.2f\n", numero * numero * numero);
        printf("Raiz quadrada: %.2f\n", sqrt(numero));
    }

    return 0;
}