#include <stdio.h>

int main(){
    float vendas[12][4];
    int mes, semanas;
    float total_mes[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    float total_semana[4] = {0, 0, 0, 0};
    float total_ano = 0;

    for (mes = 0; mes < 12; mes += 1) {
        for (semanas = 0; semanas < 4; semanas += 1) {
            printf("Digite o valor vendido na semana %d do mes %d: ", semanas + 1, mes + 1);
            scanf("%f", &vendas[mes][semanas]);
            total_mes[mes] += vendas[mes][semanas];
            total_semana[semanas] += vendas[mes][semanas];
            total_ano += vendas[mes][semanas];
        }
        printf("\n");
    }

    printf("\nTotal vendido por mes: \n");

    for (mes = 0; mes < 12; mes += 1) {
        printf("Mes %d: %.2f\n", mes + 1, total_mes[mes]);
    }

    printf("\nTotal vendido por semana: \n");

    for (semanas = 0; semanas < 4; semanas += 1) {
        printf("Semana %d: %.2f\n", semanas + 1, total_semana[semanas]);
    }

    printf("\nTotal vendido no ano: %.2f\n", total_ano);

    return 0;
}
