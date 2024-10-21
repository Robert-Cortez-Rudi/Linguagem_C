#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);

    printf("Insira o segundo numero: ");
    scanf("%d", &num2);

    printf("Insira o terceiro numero: ");
    scanf("%d", &num3);

    if ((num1 > num2) && (num2 > num3)) 
        printf("Ordem crescente dos numeros: %d %d %d", num3, num2, num1);
    else if ((num1 > num3) && (num3 > num2)) 
        printf("Ordem crescente dos numeros: %d %d %d", num2, num3, num1);
    else if ((num2 > num1) && (num1 > num3))
        printf("Ordem crescente dos numeros: %d %d %d", num3, num1, num2);
    else if ((num2 > num3) && (num3 > num1)) 
        printf("Ordem crescente dos numeros: %d %d %d", num1, num3, num2);
    else if ((num3 > num1) && (num1 > num2)) 
        printf("Ordem crescente dos numeros: %d %d %d", num2, num1, num3);
    else if ((num3 > num2) && (num2 > num1)) 
        printf("Ordem crescente dos numeros: %d %d %d", num1, num2, num3);

    return 0;
}
