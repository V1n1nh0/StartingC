#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #define nt 5


int main() {

    // IMPRIME O CABEÇALHO DO WEB JOGUINHO
printf("\n\n");
printf("          P  /_\\  P                                \n");
printf("         /_\\_|_|_/_\\                               \n");
printf("     n_n | ||. .|| | n_n         Bem vindo ao      \n");
printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!  \n");
printf("    |" "  |  |_|  |"  " |                          \n");
printf("    |_____| ' _ ' |_____|                          \n");
printf("          \\__|_|__/                                \n");
printf("\n\n");

    
    // NÚMERO SECRETO
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int ns = numerogrande % 100;

    //VARIAVEL DE TENTATIVAS
    int ntentativas;
    int chute;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    switch(nivel) {
        case 1:
            ntentativas = 15;
            break;

        case 2:
            ntentativas = 9;
            break;

        default:
            ntentativas = 5;
            break;
    }
    
      // QUANDO GANHOU ≠ 0 -- LOOP ACABA
        for(int i = 1; i <= ntentativas; i++) {
        printf("\nAttempt %d\n", i);
        printf("Guess a number from 0 a 100: ");
        scanf("%d", &chute);
        printf("Your guess was: %d\n", chute);
    
    // BLOQUEIOS DE COISAS QUE NÃO PODEM SER DIGITADAS PELO PLAYER
        if(chute < 0){
            printf("\n!!ALERT!! You can't guess negative numbers!\n\n");
            // i--;
            continue;
        }
        else if(chute > 100){
            printf("\n!!ALERT!! You can't guess numbers greater than 100!\n\n");
           // i--;
            continue;
        }
        /*else if (){
            printf("VOCE NAO PODE COLOCAR LETRAS CORNO");
            break;
        }*/

        //EM CASO DE ACERTO DO NÚMERO, MENSAGEM E STOP NO LOOP
        int acertou = (chute == ns);
        
        if (acertou) { 
            printf("\n\nCongratulations! You're Right!\n");
            printf("Play again. You're a great player!\n\n");
            printf("             OOOOOOOOOOO               \n");
            printf("         OOOOOOOOOOOOOOOOOOO           \n");
            printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
            printf("    OOOOOO      OOOOO      OOOOOO      \n");
            printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
            printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
            printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
            printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
            printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
            printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
            printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
            printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
            printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
            printf("        OOOOOO         OOOOOO          \n");
            printf("             OOOOOOOOOOOO              \n");
        }
            if(acertou == 1) {
                break;
            }
        // DICAS PARA QUANDO ERRAR O NÚMERO.
        else {
            printf("\nYou missed.\n");
            printf("Don't be discouraged. Try again!\n");
        }
            if(chute > ns) {
                printf("\nTip: The number is leen than %d \n\n", chute);
            }
            else if(chute < ns) {
                printf("\nTip: The number is greater than %d \n\n", chute);
            }
        
        if(i >= ntentativas) {
            printf("\nGAME OVER!\n\n");
            printf("       \\|/ ____ \\|/    \n");
            printf("        @~/ ,. \\~@      \n");
            printf("       /_( \\__/ )_\\    \n");
            printf("          \\__U_/        \n");
        }
    }
}


