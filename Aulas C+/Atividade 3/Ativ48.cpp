#include <stdio.h>

int main() {
    long long a = 1;
    long long b = 2;
    long long soma = 0;

    while (a <= 4000000) {
        if (a % 2 == 0)
            soma += a;

        long long proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("Soma = %lld\n", soma);

    return 0;
}