#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
 
int main(void){
    
    //comando de regionalização
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    //exibição do texto
    printf ("nãon\n");
 
    system ("pause");
    return 0;
}