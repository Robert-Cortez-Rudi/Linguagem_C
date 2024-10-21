#include <stdio.h>
#include <conio.h>  
 
int main() { 
    int num, dezena, unidade;
    char dezena_num, unidade_num; 
    printf("Insira um numero: ");
    dezena_num = getche();
    unidade_num = getche();

    dezena = dezena_num - '0';
    unidade = unidade_num - '0';
    num = dezena * 10 + unidade;

    printf ("\n%d * 1 = %d", num, num * 1); 
    printf ("\n%d * 2 = %d", num, num * 2); 
    printf ("\n%d * 3 = %d", num, num * 3); 
    printf ("\n%d * 4 = %d", num, num * 4); 
    printf ("\n%d * 5 = %d", num, num * 5); 
    printf ("\n%d * 6 = %d", num, num * 6); 
    printf ("\n%d * 7 = %d", num, num * 7); 
    printf ("\n%d * 8 = %d", num, num * 8); 
    printf ("\n%d * 9 = %d", num, num * 9); 
    printf ("\n%d * 10 = %d", num, num * 10); 
    
    return 0; 
}
