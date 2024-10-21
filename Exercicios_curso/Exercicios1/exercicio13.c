#include <stdio.h>

int main(){
    float saldo;
    printf("Insira o saldo da conta poupanca: ");
    scanf("%f", &saldo);
    printf("Com o reajuste de 2%%, o novo valor ficou da seguinte forma: %.2f", (saldo * 0.02) + saldo);
    return 0;
}
