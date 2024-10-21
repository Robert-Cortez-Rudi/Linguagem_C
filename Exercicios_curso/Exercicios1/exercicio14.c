#include <stdio.h>

int main(){
    int base, altura;
    printf("Insira a base do retangulo: ");
    scanf("%d", &base);
    printf("Insira a altura do retangulo: ");
    scanf("%d", &altura);
    printf("O perimetro do retangulo e: %d\n", base + altura);
    printf("O area do retangulo e: %d", base * altura);
    return 0;
}
