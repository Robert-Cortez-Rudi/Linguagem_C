// Faça um programa em C que imprima o seu nome
#include <stdio.h>

int main(){
    char nome[50]; // %s para um conjunto de caracteres(strings)

    printf("Insira o seu nome: ");
    scanf("%49s", &nome[0]);
    printf("Seu nome e %s", nome);
    return 0;
}
