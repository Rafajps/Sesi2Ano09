#include <stdio.h>

int main() {
    long long soma = 0;
    long long somaQuadrados = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
        somaQuadrados += (long long)i * i;
    }

    long long resultado = soma * soma - somaQuadrados;

    printf("Resultado = %lld\n", resultado);

    return 0;
}