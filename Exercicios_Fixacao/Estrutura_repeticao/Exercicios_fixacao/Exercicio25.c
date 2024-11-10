#include <stdio.h>

int main(){
    int idade, peso;

    while (1) {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        printf("Digite seu peso: ");
        scanf("%d", &peso);

        if ((idade >= 1 && idade <= 100) && (peso >= 30 && peso <= 150)){
            printf("Valores validos!!");
            break;
        }
        else
            printf("Valores invalidos! Digite-os novamente!\n\n");
    }

    return 0;
}
