// Operadores aritméticos
#include <stdio.h>

int main(){
	int a = 10;
	int b = 3;
	
	int som, sub, mul, div, mod;
	
	som = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	mod = a % b;
	
	printf ("%d + %d = %d\n", a, b, som); //10 + 3 = 13
	printf ("%d - %d = %d\n", a, b, sub); //10 - 3 = 7
	printf ("%d * %d = %d\n", a, b, mul); //10 * 3 = 30
	printf ("%d / %d = %d\n", a, b, div); //10 / 3 = 3
	printf ("%d %% %d = %d\n", a, b, mod); //10 % 3 = 1

	return 0;
}

