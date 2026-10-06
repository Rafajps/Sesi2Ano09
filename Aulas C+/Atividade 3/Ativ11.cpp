#include <stdio.h>

int main() {
    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}