#include <stdio.h>

int main() {
    int numero = 1;
    int encontrado = 0;

    while (!encontrado) {
        encontrado = 1;

        for (int i = 1; i <= 20; i++) {
            if (numero % i != 0) {
                encontrado = 0;
                break;
            }
        }

        if (!encontrado)
            numero++;
    }

    printf("Resultado = %d\n", numero);

    return 0;
}