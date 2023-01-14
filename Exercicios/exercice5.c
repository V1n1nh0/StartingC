#include <stdio.h>

main() {
    int soma = 0;
    for(int i = 1; i <= 100; i++){
    soma = soma + i;
    printf("%d + ", i);
    }
    printf("\nA soma eh: %d", soma);
}