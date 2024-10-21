#include <stdio.h>

int main(){
    float comprimento, largura, perimetro, metro_linear, custo_total;
    printf("Entre com o comprimento: ");
    scanf("%f", &comprimento);
    printf("Entre com a largura: ");
    scanf("%f", &largura);
    perimetro = 2 * (comprimento + largura);
    printf("Entre com o valor do metro linear: ");
    scanf("%f", &metro_linear);
    custo_total = perimetro * metro_linear;
    printf("\nO custo total: %.2f", custo_total);

    return 0;
}
