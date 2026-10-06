#include <stdio.h>

int main() {
    double salario = 2000.0;
    double percentual = 1.5;
    int anoAtual;

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    if (anoAtual < 1995) {
        printf("Ano invalido.\n");
        return 0;
    }

    for (int ano = 1996; ano <= anoAtual; ano++) {
        salario += salario * percentual / 100;
        percentual *= 2;
    }

    printf("Salario atual = R$ %.2f\n", salario);

    return 0;
}