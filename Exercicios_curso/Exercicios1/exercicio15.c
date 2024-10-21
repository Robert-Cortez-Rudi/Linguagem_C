#include <stdio.h>

int main(){
    float produto, desconto;
    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    printf("Digite o percentual do desconto (de 0 a 100): ");
    scanf("%f", &desconto);
    desconto = produto * (desconto / 100);
    printf("O valor do desconto foi de: %.2f\n", desconto);
    printf("Com o desconto aplicado, o novo valor ficou no total de: %.2f", produto - desconto);
    return 0;
}
