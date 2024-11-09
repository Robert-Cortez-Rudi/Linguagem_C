#include <stdio.h>

int main(){
    int num_int, quantidade;
    float num_float, soma;

    printf("Quantos pares voce deseja fazer a soma: ");
    scanf("%d", &quantidade);

    do {
        printf("Insira um numero inteiro: ");
        scanf("%d", &num_int);

        printf("Insira um numero real: ");
        scanf("%f", &num_float);

       soma = (float) num_int * num_float;
       printf("%.3f\n", soma);

       quantidade--;
    } while (quantidade > 0);

    return 0;
}