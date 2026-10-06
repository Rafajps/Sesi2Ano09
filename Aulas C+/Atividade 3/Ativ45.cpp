#include <stdio.h>

int main() {
    int opcao;
    double valor, resultado;

    do {
        printf("\n1 - Km/h para m/s\n");
        printf("2 - m/s para Km/h\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite Km/h: ");
            scanf("%lf", &valor);

            resultado = valor / 3.6;

            printf("%.2f m/s\n", resultado);

        } else if (opcao == 2) {
            printf("Digite m/s: ");
            scanf("%lf", &valor);

            resultado = valor * 3.6;

            printf("%.2f Km/h\n", resultado);
        }

    } while (opcao != 3);

    return 0;
}