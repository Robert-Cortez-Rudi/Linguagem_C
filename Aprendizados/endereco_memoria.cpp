#include <stdio.h>

int main() {
	char a = 'A';
	int b = 123;
	float c = 3.1415926535;
	long d = 789545465;

	printf ("Valor de char a: %c. Endereco de a: 0x%p\n", a, &a);
	printf ("Valor de int b: %d. Endereco de b: 0x%p\n", b, &b);
	printf ("Valor de float c: %f. Endereco de c: 0x%p\n", c, &c);
	printf ("Valor de long d: %ld. Endereco de d: 0x%p\n", d, &d);
	
    return 0;
}

