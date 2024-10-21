#include <stdio.h>

int main(){
    char nome[30], endereco[50];
    printf("Insira seu nome: ");
    scanf("%29s", &nome[0]);
    printf("Insira seu endereco: ");
    scanf("%49s", &endereco[0]);
    printf("Nome: %s - Endereco: %s", nome, endereco); // Entender o pq do espaço dentro de uma variavel cortar o restante do dado
    return 0;
}
