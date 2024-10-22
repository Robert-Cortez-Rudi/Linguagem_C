#include <stdio.h>

int contar_digitos(int num){
    if (num < 10)
        return 1;
    return 1 + contar_digitos(num / 10);
}


int main(){
    int numero, conta_digito;

    printf("Insira um numero para fazer a contagem de digitos: ");
    scanf("%d", &numero);
    
    conta_digito = contar_digitos(numero);

    printf("A quantidade de digitos: %d", conta_digito);

    return 0;
}
