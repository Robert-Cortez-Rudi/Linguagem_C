#include <stdio.h>

int main(){
    float num1, num2, num3, media;
    printf("Insira o primeiro valor: ");
    scanf("%f", &num1);
    printf("Insira o segundo valor: ");
    scanf("%f", &num2);
    printf("Insira o terceiro valor: ");
    scanf("%f", &num3);
    media = (num1 + num2 + num3) / 3;
    printf("O media dos valores inseridos e: %.2f", media);
    return 0;
}
