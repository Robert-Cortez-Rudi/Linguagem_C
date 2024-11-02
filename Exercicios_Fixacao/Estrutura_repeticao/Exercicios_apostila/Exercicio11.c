#include <stdio.h>

int main(){
    int contador = 0, num;

    while (1) {
        printf("Insira um numero: ");
        scanf("%d", &num);

        if ((num >= 100) && (num <= 200)) 
            contador += 1;
        else if (num == 0) {
            printf("\nVoce saiu do ciclo!");
            break;
        }
    }

    printf("\nForam informados %d numero entre 100 e 200", contador);

    return 0;
}
