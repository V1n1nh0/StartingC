#include <stdio.h>

int main() {

    // NÚMERO 1
    printf("Digite um numero de 0 a 100:  ");
    int nx;
    scanf("%d", &nx);

    // NÚMERO 2
    printf("\nAgora digite mais outro numero de 0 a 100:  ");
    int ny;
    scanf("%d", &ny);

    printf("\nSeus numeros digitados sao: %d e %d", nx, ny);

    int r = ny * nx;
    printf("\n \nO resultado da multiplicacao ser: %d", r);

}