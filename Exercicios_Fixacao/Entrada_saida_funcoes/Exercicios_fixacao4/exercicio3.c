#include <stdio.h>


void verificarParidade(int num){
    int result = num % 2;
    printf("Sendo: [0] numero impar  e   [1] numero par\n");
    printf("O numero %d e: [%d]", num, result);
}

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    verificarParidade(numero);

    return 0;
}
