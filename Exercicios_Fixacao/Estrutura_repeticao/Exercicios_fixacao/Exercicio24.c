#include <stdio.h>

int main(){
    int a, b;

    while (1) {
        printf("Insira um numero para A: ");
        scanf("%d", &a);

        printf("Insira um numero para B: ");
        scanf("%d", &b);

        if (a > b)
            printf("Digite novamente! o A deve ser menor do que o numero B\n\n");
        else
            break;
    }

    printf("Valores validos com sucesso!");

    return 0;
}