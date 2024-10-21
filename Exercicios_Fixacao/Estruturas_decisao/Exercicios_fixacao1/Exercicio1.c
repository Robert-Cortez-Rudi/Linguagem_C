#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);

    printf("Insira o segundo numero: ");
    scanf("%d", &num2);

    if (num1 == num2)
        printf("O entrada de valor esta igual. Entrada invalida!!");
    else {
        printf("Insira o terceiro numero: ");
        scanf("%d", &num3);
        
        if ((num1 == num3) || (num2 == num3))
            printf("Numeros repetidos. Entrada invalida!!");
        else {
            if ((num1 > num2) && (num1 > num3))
                printf("\nO primeiro numero e o maior: %d", num1);
            else if ((num2 > num1) && (num2 > num3))
                printf("\nO segundo numero e o maior: %d", num2);
            else
                printf("\nO terceiro numero e o maior: %d", num3);
        }
    }

    return 0;
}
