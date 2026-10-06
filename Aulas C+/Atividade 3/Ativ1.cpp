#include <stdio.h>

int main() {
    int numero = 3;

    for (int i = 1; i <= 5; i++) {
        printf("%d\n", numero);
        numero += 3;
    }

    return 0;
}