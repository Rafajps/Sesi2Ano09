#include <stdio.h>

int main() {
    int habitantes;
    int codigo;
    double consumo;
    double total = 0;
    double residencial = 0;
    double comercial = 0;
    double industrial = 0;
    double maior = 0;
    double menor = 0;

    printf("Numero de habitantes: ");
    scanf("%d", &habitantes);

    for (int i = 1; i <= habitantes; i++) {
        printf("\nConsumo do habitante %d: ", i);
        scanf("%lf", &consumo);

        printf("Codigo (1-Residencial, 2-Comercial, 3-Industrial): ");
        scanf("%d", &codigo);

        total += consumo;

        if (i == 1) {
            maior = menor = consumo;
        } else {
            if (consumo > maior)
                maior = consumo;

            if (consumo < menor)
                menor = consumo;
        }

        if (codigo == 1)
            residencial += consumo;
        else if (codigo == 2)
            comercial += consumo;
        else if (codigo == 3)
            industrial += consumo;
    }

    printf("\nMaior consumo: %.2f\n", maior);
    printf("Menor consumo: %.2f\n", menor);
    printf("Consumo medio: %.2f\n", total / habitantes);
    printf("Residencial: %.2f\n", residencial);
    printf("Comercial: %.2f\n", comercial);
    printf("Industrial: %.2f\n", industrial);

    return 0;
}