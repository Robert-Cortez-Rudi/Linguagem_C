#include <stdio.h>
#include <conio.h>

int main(){
    char caracter;
    printf("Insira um caractere maiusculo: ");
    caracter = getche();
    printf("\n%c: %c", caracter, caracter + 32);
    return 0;
}
