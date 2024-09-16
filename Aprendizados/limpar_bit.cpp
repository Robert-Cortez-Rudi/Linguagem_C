#include <stdio.h>

int main() {
    unsigned char value = 0b10101010; // Valor binário: 1010[1]010
    unsigned char mask;
    unsigned char result;

    mask = 0b11110111;
    result = value & mask;
    
    printf("Apos limpar o bit: 0x%x\n", result); // Desloca o resultado e exibe o bit

    return 0;
}

