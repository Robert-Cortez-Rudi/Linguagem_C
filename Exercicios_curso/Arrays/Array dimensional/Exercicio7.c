#include <stdio.h>

#define NUM_MERCADORIAS 100

int main() {
    float preco_compra[NUM_MERCADORIAS], preco_venda[NUM_MERCADORIAS];
    int lucro_menor_10 = 0, lucro_entre_10_e_20 = 0, lucro_maior_20 = 0;

    for (int i = 0; i < NUM_MERCADORIAS; i++) {
        printf("Mercadoria %d:\n", i + 1);
        printf("Digite o preco de compra: ");
        scanf("%f", &preco_compra[i]);
        printf("Digite o preco de venda: ");
        scanf("%f", &preco_venda[i]);

        float lucro_percentual = ((preco_venda[i] - preco_compra[i]) / preco_compra[i]) * 100;

        if (lucro_percentual < 10) {
            lucro_menor_10++;
        } else if (lucro_percentual <= 20) {
            lucro_entre_10_e_20++;
        } else {
            lucro_maior_20++;
        }
    }

    printf("\nResultado:\n");
    printf("Mercadorias com lucro < 10%%: %d\n", lucro_menor_10);
    printf("Mercadorias com 10%% <= lucro <= 20%%: %d\n", lucro_entre_10_e_20);
    printf("Mercadorias com lucro > 20%%: %d\n", lucro_maior_20);

    return 0;
}
