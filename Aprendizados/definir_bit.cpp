#include <stdio.h>

int main() {
    unsigned char value = 0b10101010; // Valor binário: 10101[0]10
    unsigned char mask;
    unsigned char result;

    mask = 0b00000100;
    result = value | mask;
    
    printf("Apos definir o bit: 0x%x\n", result); // Desloca o resultado e exibe o bit

    return 0;
}

