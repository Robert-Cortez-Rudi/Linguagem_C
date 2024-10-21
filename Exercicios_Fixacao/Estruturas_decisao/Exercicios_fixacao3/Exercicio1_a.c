#include <stdio.h>

int main(){
    int idade;
    char status;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    status = (idade >= 18) ? "Maior de idade": (idade >= 12) ? "Adolescente" : "Crianca";

    printf("%s", status);

    return 0;

 // INCOMPLETO
}
