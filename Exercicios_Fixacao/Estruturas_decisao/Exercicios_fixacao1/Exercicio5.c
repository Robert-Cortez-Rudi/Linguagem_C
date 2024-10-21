#include <stdio.h>

int main(){
    int opc;
    float preco, troco, valor;

    printf("Insira o numero para selecionar a bebida: \n");
    printf("1 - Agua (R$ 2.00)\n");
    printf("2 - Refrigerante (R$ 3.50)\n");
    printf("3 - Suco (R$ 4.00)\n");
    printf("4 - Cafe (R$ 1.50)\n");
    printf("5 - Cha (R$ 2.50)\n");
    printf("6 - Energetico (R$ 5.00)\n");
    printf("> ");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            printf("Agua selecionada!\n");
            preco = 2.00;
            break;
        case 2:
            printf("Refrigerante selecionado!\n");
            preco = 3.50;
            break;
        case 3:
            printf("Suco selecionado!\n");
            preco = 4.00;
            break;
        case 4:
            printf("Cafe selecionado!\n");
            preco = 1.50;
            break;
        case 5:
            printf("Cha selecionado!\n");
            preco = 2.50;
            break;
        case 6:
            printf("Energetico selecionado!\n");
            preco = 5.00;
            break;
        default:
            printf("Opcao invalida!");
            return 1;
    }

    printf("Insira o valor em dinheiro: ");
    scanf("%f", &valor);

    if (valor == preco)
        printf("Compra realizada. Nao ha troco!");
    else if (valor < preco)
        printf("Valor insuficiente!");
    else {
        troco = valor - preco;
        printf("Compra realizada. Troco: R$ %.2f.\n", troco);
    }

    return 0;
}
