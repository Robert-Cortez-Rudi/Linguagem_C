#include <stdio.h>

int main(){
    int n, reverso = 0;

    printf("Insira um numero: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Numero invalido");
        return 1;
    }

    while (n != 0){
        reverso = (reverso * 10) + (n % 10);
        n /= 10;
    }

    printf("O numero invertido: %d", reverso);

    return 0;
}