#include <stdio.h>

#define DIAS_SEMANA 7
#define MAX_HORARIOS 10

int main() {
    int horarios[DIAS_SEMANA][MAX_HORARIOS] = {0}; 
    int dia, i, qtd_horarios;

    do {
        printf("\nEscolha o dia da semana para inserir os horarios (1-Domingo a 7-Sabado, 0 para encerrar): ");
        scanf("%d", &dia);

        if (dia < 0 || dia > 7) {
            printf("Dia invalido! Tente novamente.\n");
        }

        if (dia == 0) 
            break; 

        printf("Quantos horarios deseja inserir para o dia %d? (Máximo %d): ", dia, MAX_HORARIOS);
        scanf("%d", &qtd_horarios);

        if (qtd_horarios < 0 || qtd_horarios > MAX_HORARIOS) {
            printf("Quantidade invalida! Tente novamente.\n");
            continue;
        }

        printf("Insira os horarios (apenas numeros inteiros representando horas, como 8 para 08:00):\n");
        for (i = 0; i < qtd_horarios; i++) {
            printf("Horário %d: ", i + 1);
            scanf("%d", &horarios[dia - 1][i]);
        }
    } while (1);

    printf("\nLista de horarios de partida para todos os dias:\n");
    for (i = 0; i < DIAS_SEMANA; i++) {
        printf("Dia %d: ", i + 1);
        for (int j = 0; j < MAX_HORARIOS && horarios[i][j] != 0; j++) {
            printf("%02d:00 ", horarios[i][j]);
        }
        printf("\n");
    }

    return 0;
}
