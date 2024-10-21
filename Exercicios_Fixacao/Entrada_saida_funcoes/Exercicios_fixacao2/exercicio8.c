#include <stdio.h>

int main(){
    int numero, milhar, centena, dezena, unidade;
    printf("Insira um numero (de 1000 ate 9999): ");
    scanf("%d", &numero);
    milhar = numero / 1000;
    centena = (numero % 1000) / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;
    printf("%d\n", milhar);
    printf("%d\n", centena);
    printf("%d\n", dezena);
    printf("%d", unidade);

    return 0;
}
