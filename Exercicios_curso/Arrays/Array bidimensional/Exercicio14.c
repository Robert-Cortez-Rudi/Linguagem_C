#include <stdio.h>

int main() {
    int matriz[5][5];
    int linha, coluna, temp;

    printf("Digite os elementos da matriz 5x5:\n");
    for (linha = 0; linha < 5; linha += 1) {
        for (coluna = 0; coluna < 5; coluna += 1) {
            printf("Elemento [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("\nMatriz original:\n");
    for (linha = 0; linha < 5; linha += 1) {
        for (coluna = 0; coluna < 5; coluna += 1) {
            printf("%d \t", matriz[linha][coluna]);
        }
        printf("\n");
    }


    for (coluna = 0; coluna < 5; coluna += 1) {
        temp = matriz[1][coluna];
        matriz[1][coluna] = matriz[4][coluna];
        matriz[4][coluna] = temp;
    }

    for (linha = 0; linha < 5; linha += 1) {
        temp = matriz[linha][2];
        matriz[linha][2] = matriz[linha][4];
        matriz[linha][4] = temp;
    }

    for (linha = 0; linha < 5; linha += 1) {
        temp = matriz[linha][0 + linha];
        matriz[linha][0 + linha] = matriz[linha][4 - linha];
        matriz[linha][4 - linha] = temp;
    }

    printf("\nMatriz modificada:\n");
    for (linha = 0; linha < 5; linha += 1) {
        for (coluna = 0; coluna < 5; coluna += 1) {
            printf("%d \t", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
