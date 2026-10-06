#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    long long soma = 0;

    for (int i = 2; i < 2000000; i++) {
        if (ehPrimo(i))
            soma += i;
    }

    printf("Soma = %lld\n", soma);

    return 0;
}