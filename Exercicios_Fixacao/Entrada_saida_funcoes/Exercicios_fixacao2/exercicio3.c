#include <stdio.h>

int main(){
    int kg_ouro;
    printf("Insira o KG de ouro: ");
    scanf("%d", &kg_ouro);
    printf("\n  5 g: R$ %.2f", (kg_ouro / 1000.00) * 5.00);
    printf("\n  10 g: R$ %.2f", (kg_ouro / 1000.00) * 10.00);
    printf("\n  20 g: R$ %.2f", (kg_ouro / 1000.00) * 20.00);
    return 0;
}
