#include <stdio.h>

int main() {
    int matrizA[3][4], matrizB[3][4]; 
    int linha, coluna; 

    printf("Digite os 12 valores da matriz A:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 4; coluna++) {
            printf("Elemento A[%d][%d]: ", linha, coluna);
            scanf("%d", &matrizA[linha][coluna]);

            matrizB[linha][coluna] = matrizA[linha][coluna] * 3;
        }
    }

    printf("\nElementos da matriz B (A multiplicada por 3):\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 4; coluna++) {
            printf("%d \t", matrizB[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
