#include <stdio.h>

int main(){
    int n, regular = 0, nota, idade, quant_excelente = 0;
    float idade_excelente = 0, porc_bom = 0;

    for (n = 1; n <= 20; n++) {
        printf("\n\n%d) Insira sua nota: ", n);
        printf("\n1 - Regular");
        printf("\n2 - Bom");
        printf("\n3 - Excelente");
        printf("\n > ");

        scanf("%d", &nota);

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if (nota == 1) {
            regular += 1;
        }
        else if (nota == 2) {
            porc_bom += 1;
        }
        else if (nota == 3){
            quant_excelente += 1;
            idade_excelente += idade;
        }
    }

    idade_excelente = (quant_excelente != 0) ? (idade_excelente / quant_excelente) : 0;
    porc_bom = (porc_bom / (n - 1)) * 100;

    printf("\nMedia de idade das pessoas que responderam excelente: %.2f", idade_excelente);
    printf("\nQuantidade de pessoas que responderam regular: %d", regular);
    printf("\nPorcentagem de pessoas que responderam bom: %.2f%%", porc_bom);
    return 0;
}
