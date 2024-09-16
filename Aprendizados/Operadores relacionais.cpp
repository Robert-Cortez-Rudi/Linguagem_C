// Operadores relacionais
#include <stdio.h>

int main()
	{

	int a = 10;
	int b = 20;
	int result;

	//Maior
	result = (a > b);
	printf ("%d > %d  [%d]\n", a, b, result); //10 > 20   [0] 
		
	//Menor
	result = (a < b);
	printf ("%d < %d  [%d]\n", a, b, result); //10 < 20   [1] 
	
	//Maior ou igual
	result = (a >= b);
	printf ("%d >= %d  [%d]\n", a, b, result); //10 >= 20   [0] 
	
	//Menor ou igual
	result = (a <= b);
	printf ("%d <= %d  [%d]\n", a, b, result); //10 <= 20   [1] 
	
	//Comparação
	result = (a == b);
	printf ("%d == %d  [%d]\n", a, b, result); //10 == 20   [0]

	//Diferente	
	result = (a != b);
	printf ("%d <> %d  [%d]\n", a, b, result); //10 <> 20   [0]

	return 0;
}

