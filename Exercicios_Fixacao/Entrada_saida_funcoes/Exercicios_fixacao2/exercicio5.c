#include <stdio.h>

int main(){
    int price_product;
    printf("Entre com o valor do produto: ");
    scanf("%d", &price_product);
    printf("1 X %.2f = %.2f", price_product * 1.00, price_product * 1.00);
    printf("\n2 X %.2f = %.2f", price_product - (price_product * 0.2), (price_product - (price_product * 0.2)) * 2);
    printf("\n3 X %.2f = %.2f", price_product / 1.5, price_product * 2.0);
    return 0;
}
