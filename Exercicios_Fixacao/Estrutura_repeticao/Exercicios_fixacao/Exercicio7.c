#include <stdio.h>

int main(){
    int contador, n, soma = 0;

    printf("Insira um numero para fazer a somatoria dos numeros pares : ");
    scanf("%d", &n);

    for(contador = n; contador >= 0; contador--){
        if(contador % 2 == 0)
            soma += contador;
    }

    printf("A soma dos numeros pares de 0 ate %d e: %d", n, soma);


    return 0;
}