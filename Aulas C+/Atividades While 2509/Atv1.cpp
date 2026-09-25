#include <stdio.h>
#include <stdlib.h>

int main() {
    float val, soma;
    int contagem;
    
    soma = 0;
    contagem = 0;
    
    while(contagem < 5) {
        printf("\nDigite o %do. numero: ", contagem + 1);
        scanf("%f", &val);
        soma = soma + val;
        contagem = contagem + 1;
    }
    
    printf("\nO resultado da soma é: %.2f\n", soma);
    
    return 0;
}
