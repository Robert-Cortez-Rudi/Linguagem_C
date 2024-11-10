#include <stdio.h>

int main(){
    int a, b;

    while (1) {

        printf("Insira um numero para A: ");
        scanf("%d", &a);

        printf("Insira um numero para B: ");
        scanf("%d", &b);

        if ((a % 5 == 0) && (b % 5 == 0) && (a < b)) {
            printf("Valores validos com sucesso!");
            break;
        }
        else
            printf("Valores invalidos! O valores devem ser multiplos de 5 e o A deve ser menor do que o B!\n\n");
    }


    return 0;
}