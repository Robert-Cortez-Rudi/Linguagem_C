#include <stdio.h>

int main(){
    int velocidade;
    char status;

    printf("Insira a velocidade: ");
    scanf("%d", &velocidade);

    if (velocidade >= 120) 
        status = "Muito rapido";
    else if (velocidade >= 80)
        status = "Rapido";
    else if (velocidade >= 40)
        status = "Moderado";
    else 
        status = "Lento";


    return 0;
}
