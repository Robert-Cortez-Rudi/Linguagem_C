#include <stdio.h>

int main() {
    int manicure = 0, servico;
    int servicos[5][3];  
    int i, j, soma;

    do {
        printf("Informe a manicure <1-5> (ou 0 para sair):\n");
        scanf("%d", &manicure);

        if (manicure != 0) {
            printf("Informe o serviço <1-pe 2-mao 3-podologia>:\n");
            scanf("%d", &servico);

            if (manicure >= 1 && manicure <= 5) {
                if (servico >= 1 && servico <= 3) {
                    servicos[manicure - 1][servico - 1]++;  
                } else {
                    printf("Serviço inválido! Por favor, escolha entre 1, 2 ou 3.\n");
                }
            } else {
                printf("Manicure inválida! Por favor, escolha entre 1 e 5.\n");
            }
        }
    } while (manicure != 0);  

    printf("\nFaturamento das manicures:\n");
    for (i = 0; i < 5; i++) {
        soma = servicos[i][0] * 10;  
        soma += servicos[i][1] * 15;  
        soma += servicos[i][2] * 30;  
        printf("Manicure %d: R$ %d\n", i + 1, soma);  
    }

    return 0;
}
