#include <stdio.h>

float soma(float num1,float num2){
    float soma = num1 + num2;
    printf("\n%.1f + %.1f = %.1f\n", num1, num2, soma);
    return 0;
}

float subtracao(float num1, float num2){
    float subtracao = num1 - num2;
    printf("%.1f - %.1f = %.1f\n", num1, num2, subtracao);
    return 0;
}

float multiplicacao(float num1, float num2){
    float multiplicacao = num1 * num2;
    printf("%.1f * %.1f = %.1f\n", num1, num2, multiplicacao);
    return 0;
}

float divisao(float num1, float num2){
    float divisao = num1 / num2;
    printf("%.1f / %.1f = %.1f", num1, num2, divisao);
    return 0;
}


int main(){
    float n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    soma(n1, n2);
    subtracao(n1, n2);
    multiplicacao(n1, n2);
    divisao(n1, n2);
    return 0;
}
