#include <stdio.h>

int main() {
    unsigned char value = 0b10101010; // Valor binário: 1010[1]010
    unsigned char mask;
    unsigned char result;

    mask = 0b00001000;
    result = value & mask;
    
	result = result >> 3;
    printf("Bit isolado: %d\n", result); // Desloca o resultado e exibe o bit

    return 0;
}

