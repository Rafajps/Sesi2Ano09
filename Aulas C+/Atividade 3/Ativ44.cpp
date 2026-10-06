#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, proximo;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    while (a <= n) {
        printf("%d ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }

    return 0;
}