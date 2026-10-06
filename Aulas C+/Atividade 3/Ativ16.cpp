#include <stdio.h>

int main() {
    int n;

    printf("Digite um N positivo e impar: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i -= 2) {
        printf("%d ", i);
    }

    return 0;
}