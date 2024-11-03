#include <stdio.h>

int main(){
    int n = 1, numero, soma = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    /*for(n = 1; n <= numero; n++){
        soma += n;
    }*/

    /*while (n <= numero) {
        soma += n;
        n++;
    }*/

    do {
        soma += n;
        n++;
    } while (n <= numero);

    printf("Soma = %d", soma);


    return 0;
}
