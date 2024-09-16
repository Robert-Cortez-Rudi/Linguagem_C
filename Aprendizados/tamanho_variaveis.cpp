#include <stdio.h>

int main() {
	char a;
	signed char b;
	unsigned char c;
	
	int d;
	signed int e;
	unsigned int f;
	
	float g;
	
	long h;
	signed long i;
	unsigned long j;
	
	printf ("Tamanho de char [a]: %zu byte\n", sizeof(a));
	printf ("Tamanho de signed char [b]: %zu byte\n", sizeof(b));
	printf ("Tamanho de unsigned char [c]: %zu byte\n", sizeof(c));

	printf ("\nTamanho de int [d]: %zu bytes\n", sizeof(d));
	printf ("Tamanho de signed int [e]: %zu bytes\n", sizeof(e));
	printf ("Tamanho de unsigned int [f]: %zu bytes\n", sizeof(f));

	printf ("\nTamanho de float [g]: %zu bytes\n", sizeof(g));

	printf ("\nTamanho de long [h]: %zu bytes\n", sizeof(h));
	printf ("Tamanho de signed long [i]: %zu bytes\n", sizeof(i));
	printf ("Tamanho de unsigned long [j]: %zu bytes\n", sizeof(j));	
				
    return 0;
}

