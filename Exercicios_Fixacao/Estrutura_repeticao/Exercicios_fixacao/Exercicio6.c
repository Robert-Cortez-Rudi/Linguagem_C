#include <stdio.h>

int main(){
    int n, maior = 0;

    do {
        printf("Insira um numero (0 para sair): ");
        scanf("%d", &n);

        if (n > maior) {
            maior = n;
        }
    } while (n != 0);

    printf("O maior numero e: %d", maior);
    return 0;
}
