#include <stdio.h>

main(void) {

    float n1;
    float n2;
    char operador;
    float resultado;

    //PEGA O N1
    printf("Digite um numero: ");
    scanf("%f", &n1);

    // PEGA O N2
    printf("Digite outro numero: ");
    scanf("%f", &n2);

    // ESCOLHA DO OPERADOR
    printf("Escolha o operador entre (+, -, *, /): ");
    scanf(" %c", &operador);
    printf("%c\n", operador);

    // MOSTRA A EXPRESSÃO
    printf("Sua expressao: %.2f %c %.2f\n", n1, operador, n2);
    
    // FAZ A CONTA
    if(operador == '+'){
        resultado = n1 + n2;
        printf("\nSeu resultado: %.2f", resultado);
    }
    else if(operador == '-'){
        resultado = n1 - n2;
        printf("\nSeu resultado: %.2f", resultado);
    }
    else if(operador == '*'){
        resultado = n1 * n2;
        printf("\nSeu resultado: %.2f", resultado);
    }
    else if(operador == '/') {
        resultado = n1 / n2;
        printf("\nSeu resultado: %.2f", resultado);
    }
    else{
        printf("\n!!ERROR!! SO ACEITAMOS NUMEROS\n");
    }
}

