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
    int a, b, contador = 0;

    printf("Digite A e B: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (ehPrimo(i))
            contador++;
    }

    printf("Quantidade de primos = %d\n", contador);

    return 0;
}