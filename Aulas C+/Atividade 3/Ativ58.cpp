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
    int a, b;
    long long soma = 0;

    printf("Digite A e B: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (ehPrimo(i))
            soma += i;
    }

    printf("Soma dos primos = %lld\n", soma);

    return 0;
}