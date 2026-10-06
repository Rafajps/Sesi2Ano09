#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, d1, d2;

    printf("Quantas vezes os dados serao jogados? ");
    scanf("%d", &n);

    srand(time(NULL));

    for (int i = 1; i <= n; i++) {
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;

        printf("Jogada %d: D1=%d D2=%d ", i, d1, d2);

        if (d1 > d2)
            printf("D1 > D2\n");
        else if (d1 < d2)
            printf("D1 < D2\n");
        else
            printf("D1 = D2\n");
    }

    return 0;
}