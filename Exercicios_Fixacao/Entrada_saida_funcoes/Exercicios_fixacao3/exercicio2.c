#include <stdio.h>  
#include <conio.h> 
int main() { 
    char passwd[10]; 
    printf ("Entre com a senha: "); 
    passwd[0] = getch();
    printf("*");
    passwd[1] = getch();
    printf("*");
    passwd[2] = getch();
    printf("*");
    passwd[3] = getch();
    printf("*");
    passwd[4] = '\0';
    printf ("\n\n"); 
    printf ("A senha que voce digitou foi: %s", passwd); 
    return 0; 

}
