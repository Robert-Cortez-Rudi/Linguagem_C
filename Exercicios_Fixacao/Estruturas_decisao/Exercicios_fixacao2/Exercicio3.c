#include <stdlib.h>   //necessário para a função rand() e srand() 
#include <time.h>     //necessário para a função time() 
#include <stdio.h>   
#include <conio.h>
 
int num_pseudo()      //NÃO alterar esta função!   
{ 
 srand(time(NULL)); 
 return (rand() % 6); //retorna um numero pseudo-aleatório de 0 a 5 
}


int main(){
    char opc;
    int escolha, escolha_bot, total;

    printf("Vamos jogar par ou impar.\n");
    printf("Escolha [p] para 'par' e [i] para 'impar': ");
    
    opc = getch();

    if (opc == 'p') {
        printf("Par");
        printf("\nVoce e PAR e eu sou IMPAR");
        printf("\nVamos escolher um numero ao mesmo tempo.\n");
        printf("\nDigite o numero: ");
        scanf("%d", &escolha);
        escolha_bot = num_pseudo();
        printf("Eu escolhi o numero: %d", escolha_bot);
        
        total = escolha + escolha_bot;
        printf("\nA soma dos numeros e: %d", total);

        if (total % 2 == 0) {
            printf("\n%d e PAR", total);
            printf("\nVoce ganhou!");
        }
        else {
            printf("\n%d e IMPAR", total);
            printf("\nVoce perdeu!");
        }
    }
    else if (opc == 'i') {
        printf("Impar");
        printf("\nVoce e IMPAR e eu sou PAR");
        printf("\nVamos escolher um numero ao mesmo tempo.\n");
        printf("\nDigite o numero: ");
        scanf("%d", &escolha);
        escolha_bot = num_pseudo();
        printf("Eu escolhi o numero: %d", escolha_bot);
        
        total = escolha + escolha_bot;
        printf("\nA soma dos numeros e: %d", total);

        if (total % 2 == 1) {
            printf("\n%d e IMPAR", total);
            printf("\nVoce ganhou!");
        }
        else {
            printf("\n%d e PAR", total);
            printf("\nVoce perdeu!");
        }
    }
    else 
        printf("Opcao invalida!");

    return 0;
}
