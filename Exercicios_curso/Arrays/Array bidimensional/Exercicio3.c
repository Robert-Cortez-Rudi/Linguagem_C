#include <stdio.h>

int main() {
    int matriz[5][5]; 
    int linha, coluna; 

    printf("Digite os 25 valores da matriz:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("Elemento [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("\nElementos cuja soma dos índices (linha + coluna) é par:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if ((linha + coluna) % 2 == 0) {
                printf("Elemento [%d][%d]: %d\n", linha, coluna, matriz[linha][coluna]);
            }
        }
    }

    return 0;
}
