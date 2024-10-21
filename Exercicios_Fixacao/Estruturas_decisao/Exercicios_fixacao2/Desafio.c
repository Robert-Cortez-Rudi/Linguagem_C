#include <stdio.h>


int main(){
    int opc, quant_ced_mod;
    float preco, ced, troco;


    printf("Insira o numero para selecionar a bebida: \n");
    printf("1 - Agua (R$ 2.00)\n");
    printf("2 - Coca-cola (R$ 8.50)\n");
    printf("3 - Suco (R$ 4.00)\n");
    printf("4 - Cerveja (R$ 7.50)\n");
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
            printf("Coca-cola selecionada!\n");
            preco = 8.50;
            break;
        case 3:
            printf("Suco selecionado!\n");
            preco = 4.00;
            break;
        case 4:
            printf("Cerveja selecionada!\n");
            preco = 7.50;
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

    printf("\nCedulas aceitas (R$ 5,00, R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00)");
    printf("\nDigite a cedula a ser paga: ");
    scanf("%f", &ced);


    if ((ced == 5.0) || (ced == 10.00) || (ced == 20.0) || (ced == 50.0) || (ced == 100.0)) {
        troco = ced - preco;
        printf("Troco a ser devolvido: %.2f\n", troco);

        if (troco >= 50.0) {
            quant_ced_mod = troco / 50;
            troco -= quant_ced_mod * 50;
            printf("\nR$50.00 X %d", quant_ced_mod);
        }
        if (troco >= 20.0) {
            quant_ced_mod = troco / 20;
            troco -=  quant_ced_mod * 50;
            printf("\nR$50.00 X %d", quant_ced_mod);
        }
        if (troco >= 10.0) {
            quant_ced_mod = troco / 10;
            troco -= quant_ced_mod * 10;
            printf("\nR$10.00 X %d", quant_ced_mod);
        }
        if (troco >= 5.0) {
            quant_ced_mod = troco / 5;
            troco -= quant_ced_mod * 5;
            printf("\nR$5.00 X %d", quant_ced_mod);
        }
        if (troco >= 1.0) {
            quant_ced_mod = troco / 1;
            troco -= quant_ced_mod * 1;
            printf("\nR$1.00 X %d", quant_ced_mod);
        }
        if (troco >= 0.5) {
            printf("\nR$0.50 X 1");
        }
    }
    else
        printf("Cedula invalida pela maquina!");
    
    return 0;
}
