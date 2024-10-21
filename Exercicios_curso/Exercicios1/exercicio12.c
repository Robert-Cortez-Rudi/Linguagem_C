#include <stdio.h>

int main(){
    float num;
    printf("Insira um numero: ");
    scanf("%f", &num);
    printf("O quadrado do numero %.2f e: %.2f", num, num * num);
    return 0;
}
