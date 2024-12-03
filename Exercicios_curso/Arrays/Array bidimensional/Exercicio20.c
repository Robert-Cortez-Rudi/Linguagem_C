#include <stdio.h>

int main(){
    int produtos[12][5];
    int produto;
    int mes;
    int total_mes[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int total_ano[5] = {0, 0, 0, 0, 0};

    for (mes = 0; mes < 12; mes += 1) {
        for (produto = 0; produto < 5; produto += 1) {
            printf("Digite o valor vendido do produto %d no mes %d: ", produto + 1, mes + 1);
            scanf("%d", &produtos[mes][produto]);
            total_mes[mes] += produtos[mes][produto];
            total_ano[produto] += produtos[mes][produto];
        }
        printf("\n");
    }

    printf("\nTotal vendido por mes: \n");

    for (mes = 0; mes < 12; mes += 1) {
        printf("Mes %d: %d\n", mes + 1, total_mes[mes]);
    }

    printf("\nTotal vendido por produto: \n");

    for (produto = 0; produto < 5; produto += 1) {
        printf("Produto %d: %d\n", produto + 1, total_ano[produto]);
    }


    return 0;
}