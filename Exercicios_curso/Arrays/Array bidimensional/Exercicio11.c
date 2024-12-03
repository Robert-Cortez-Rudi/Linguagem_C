#include <stdio.h>

int main() {
    int matrizOriginal[2][3], matrizTransposta[3][2]; 
    int linha, coluna; 

    printf("Digite os 6 valores da matriz 2x3:\n");
    for (linha = 0; linha < 2; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("Elemento [%d][%d]: ", linha, coluna);
            scanf("%d", &matrizOriginal[linha][coluna]);
        }
    }

    for (linha = 0; linha < 2; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            matrizTransposta[coluna][linha] = matrizOriginal[linha][coluna];
        }
    }

    printf("\nElementos da matriz transposta 3x2:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 2; coluna++) {
            printf("%d \t", matrizTransposta[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
