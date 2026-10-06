#include <stdio.h>

int main() {
    int n;

    printf("Digite um N positivo e par: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}