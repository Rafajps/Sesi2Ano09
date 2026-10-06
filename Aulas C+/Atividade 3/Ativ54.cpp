#include <stdio.h>

int main() {
    int n;
    int primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n <= 1)
        primo = 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo)
        printf("%d e primo.\n", n);
    else
        printf("%d nao e primo.\n", n);

    return 0;
}