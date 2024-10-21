#include <stdio.h>

int main(){
    float num1, num2;
    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);
    printf("A soma dos dois numeros e: %.2f\n", num1 + num2);
    printf("A subtracao dos dois numeros: %.2f\n", num1 - num2);
    printf("A multiplicacao dos dois numeros: %.2f\n", num1 * num2);
    printf("A divisao dos dois numeros: %.2f\n", num1 / num2);
    return 0;
}
