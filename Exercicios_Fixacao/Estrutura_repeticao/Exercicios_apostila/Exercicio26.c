#include <stdio.h>

int main() {
    int canal, pessoas;
    float total = 0, canal4 = 0, canal5 = 0, canal7 = 0, canal12 = 0;
    float porc_4, porc_5, porc_7, porc_12;

    while (1) {
        printf("\nInsira um canal: ");
        scanf("%d", &canal);

        if (canal == 0)
            break;
        else if (!(canal == 4 || canal == 5 || canal == 7 || canal == 12)) {
            printf("Canal invalido!\n");
        }
        else {
            printf("\nCanal %d inserido!\n", canal);
            printf("Insira a quantidade de pessoas que estavam neste canal: ");
            scanf("%d", &pessoas);
            total += pessoas;

            switch (canal) {
                case 4:
                    canal4 += pessoas;
                    break;
                case 5:
                    canal5 += pessoas;
                    break;
                case 7:
                    canal7 += pessoas;
                    break;
                case 12:
                    canal12 += pessoas;
                    break;
            }
        }
    }

    porc_4 = (total != 0) ? (canal4 / total) * 100: 0;
    porc_5 = (total != 0) ? (canal5 / total) * 100: 0;
    porc_7 = (total != 0) ? (canal7 / total) * 100: 0;
    porc_12 = (total != 0) ? (canal12 / total) * 100: 0;
    

    printf("\nPorcentagem de pessoas nos canais");
    printf("\n Canal 4: %.2f%%", porc_4);
    printf("\n Canal 5: %.2f%%", porc_5);
    printf("\n Canal 7: %.2f%%", porc_7);
    printf("\n Canal 12: %.2f%%", porc_12);

    return 0;
}