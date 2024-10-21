#include <stdio.h>

int main(){
    int ano_nasc, ano_atual, idade;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nasc);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    if (ano_nasc > ano_atual)
        printf("Ano de nascimento invalido!");
    else {
        idade = ano_atual - ano_nasc;
        printf("Voce tem %d anos!", idade);
    }
    
    return 0;

}
