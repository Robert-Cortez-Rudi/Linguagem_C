#include <stdio.h>

int main() {
    char a = 0b00011011; // Valor inicial: 27 em decimal - 0001 1011

    printf("Valor inicial: ");
    printf("%d\n", a);

    // Deslocamento à esquerda   << 1
    a = a << 1; // Desloca todos os bits uma posição à esquerda
    printf("Deslocamento a esquerda (1 posicao): ");
    printf("%d\n", a);  // 54: 0011 0110

    // Deslocamento à direita   >> 2
    a = a >> 2; // Desloca todos os bits duas posições à direita
    printf("Deslocamento a direita (2 posicoes): ");
    printf("%d\n", a);  // 13: 0000 1101
    
    return 0;
}

