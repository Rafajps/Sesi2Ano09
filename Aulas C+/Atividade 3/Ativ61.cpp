#include <stdio.h>

int ehPalindromo(int numero) {
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    }

    return original == invertido;
}

int main() {
    int maior = 0;

    for (int i = 100; i <= 999; i++) {
        for (int j = i; j <= 999; j++) {
            int produto = i * j;

            if (produto > maior && ehPalindromo(produto))
                maior = produto;
        }
    }

    printf("Maior palindromo = %d\n", maior);

    return 0;
}