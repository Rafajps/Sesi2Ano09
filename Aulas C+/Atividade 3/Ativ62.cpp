#include <stdio.h>

int unidades[] = {
    0, 3, 3, 5, 4, 4, 3, 5, 5, 4
};

int especiais[] = {
    0, 6, 6, 8, 8, 7, 7, 9, 8, 8
};

int dezenas[] = {
    0, 0, 6, 6, 5, 5, 5, 7, 6, 6
};

int centenas[] = {
    0, 3, 6, 6, 8, 8, 7, 9, 8, 8
};

int quantidadeLetras(int n) {
    if (n == 1000)
        return 11; // mil

    int total = 0;

    if (n >= 100) {
        total += centenas[n / 100];

        if (n % 100 != 0)
            total += 2; // "e"

        n %= 100;
    }

    if (n >= 20) {
        total += dezenas[n / 10];

        if (n % 10 != 0)
            total += 1; // "e"

        n %= 10;
    }

    if (n >= 10) {
        total += especiais[n - 10];
        return total;
    }

    total += unidades[n];

    return total;
}

int main() {
    long long soma = 0;

    for (int i = 1; i <= 1000; i++) {
        soma += quantidadeLetras(i);
    }

    printf("Quantidade total de letras = %lld\n", soma);

    return 0;
}