//  Faça um programa em C que imprima a média aritmética entre os números 5, 8 e 12.
#include <stdio.h>

int main(){
    int num1 = 5, num2 = 8, num3 = 12;
    float media = (num1 + num2 + num3) / 3;
    printf("A media aritmetica dos numeros %d, %d e %d = %.2f", num1, num2, num3, media);
    return 0;
}
