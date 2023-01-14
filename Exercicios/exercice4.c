#include <stdio.h>

main() {
    
    // INICIALIZAÇÃO DO LOOP, NO CASO ESTÁ COMO 1
    int loop = 1;
    
    // LOOP FINALIZA QUANDO CHEGAR EM UM NÚMERO MAIOR QUE 100
    while(loop <= 100) {
        printf("\n %d", loop);

    // CADA VEZ QUE O LOOP PASSAR POR AQUI SERÁ ADICIONADO 1 NA VARIAVEL loop
    loop++;
    }
}