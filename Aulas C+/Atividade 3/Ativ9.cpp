#include <stdio.h>

int main() {
    int n, numero = 1;

    printf("Digite N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", numero);
        numero += 2;
    }

    return 0;
}