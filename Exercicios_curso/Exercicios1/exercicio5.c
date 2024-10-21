#include <stdio.h>

int main(){
    float num1, num2;
    printf("Entre com o primeiro numero: ");
    scanf("%f", &num1);
    printf("Entre com o segundo numero: ");
    scanf("%f", &num2);
    printf("Os dois valores inseridos foram: %.2f e %.2f", num1, num2);
    return 0;
}
