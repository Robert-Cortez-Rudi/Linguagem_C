#include <stdio.h>
#include <conio.h>

int main() {
	unsigned char byte = 0;
	unsigned input;
	
	printf ("Entre com oito bits (0 ou 1) a serem armazenados na variavel [byte]: \n");
	input = getche() - 48;
	byte = (byte << 1) | (input & 0x1);
	input = getche() - 48;
	byte = (byte << 1) | (input & 0x1);
	input = getche() - 48;
	byte = (byte << 1) | (input & 0x1);
	input = getche() - 48;
	byte = (byte << 1) | (input & 0x1);
	input = getche() - 48;
	byte = (byte << 1) | (input & 0x1);
	input = getche() - 48;
	byte = (byte << 1) | (input & 0x1);
	input = getche() - 48;
	byte = (byte << 1) | (input & 0x1);
	input = getche() - 48;
	byte = (byte << 1) | (input & 0x1);
	printf ("\n\nBits armazenados na variavel [byte]: %x", byte);

    return 0;
}

