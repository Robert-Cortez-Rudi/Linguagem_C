// Operadores lógicos
#include <stdio.h>

int main(){
	unsigned char a = 0b01010101; //85 //0x55
	unsigned char b = 0b00110011; //51 //0x33
	unsigned char and_result, or_result, xor_result, not_a, not_b;
	
	and_result = a & b; // AND
	or_result = a | b; // OR
	xor_result = a ^ b; // XOR
	not_a = ~a; // NOT A
	not_b = ~b; // NOT B
	
	printf ("a = %x    b = %x\n\n", a, b);
	printf ("AND: %x\n", and_result);
	printf ("OR: %x\n", or_result);
	printf ("XOR: %x\n", xor_result);
	printf ("NOT A: %x\n", not_a);
	printf ("NOT B: %x\n", not_b);
	
	return 0;

}

