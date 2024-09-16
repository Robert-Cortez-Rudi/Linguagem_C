#include <stdio.h>

int main() {
    unsigned char value = 0b10100100; // Valor binário: 1010[1]010
    unsigned char mask;
    unsigned char result;

    mask = 0b00000010;
    result = value ^ mask; // XOR
    
    printf("Bit invertido: %x\n", result); // Desloca o resultado e exibe o bit

    return 0;
}

