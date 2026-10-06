#include <stdio.h>

int main() {
    int n;
    int somaA = 0;
    int somaB = 0;
    int somaC = 0;

    printf("Digite N: ");
    scanf("%d", &n);

    // A) 1 + 2 + ... + n
    for (int i = 1; i <= n; i++)
        somaA += i;

    // B) 1 - 2 + 3 - 4 + ...
    for (int i = 1; i <= 2 * n - 1; i++) {
        if (i % 2 == 0)
            somaB -= i;
        else
            somaB += i;
    }

    // C) 1 + 3 + 5 + ... + (2n-1)
    for (int i = 1; i <= 2 * n - 1; i += 2)
        somaC += i;

    printf("A = %d\n", somaA);
    printf("B = %d\n", somaB);
    printf("C = %d\n", somaC);

    return 0;
}