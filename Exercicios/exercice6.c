#include <stdio.h>

main() {
    int numero;
    printf("TABUADA ONLINE!\n");
    printf("\nDigite um numero: ");
    scanf("%d", &numero);
    printf("====================================\n");
    printf("  AQUI ESTA A TABUADA DO NUMERO %d", numero);
    printf("\n====================================");
    for(int i = 1; i <= 10; i++){
    int tabuada = numero * i;
        printf("\n%d x %d = %d", numero, i, tabuada);
    }
    printf("\n\nby Vininho - 13/01/2023\n");
}