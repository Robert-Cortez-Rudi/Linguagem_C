#include <stdio.h>

int main(){
    int n, num_pares = 0, pares = 0;

    do {
        printf("Insira um numero (0 para sair): ");
        scanf("%d", &n);

        if (n == 0)
            break;

        if (n % 2 == 0) {
            num_pares +=  n;
            pares += 1;
        }
    } while (1);

    num_pares /= pares;

    printf("A media dos numeros pares e: %d", num_pares);

    return 0;
}
