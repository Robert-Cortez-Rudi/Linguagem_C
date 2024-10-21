#include <stdio.h>

int main(){
    float temp;

    printf("Entre com a temperatura em graus Celcius: ");
    scanf("%f", &temp);

    if (temp > 28)
        printf("Esta quente!");
    else if ((temp >= 18) && (temp <= 28))
        printf("A temperatura esta agradavel...");
    else 
        printf("Esta frio!");
    
    return 0;
}
