#include <stdio.h>

#define NUM_ALUNOS 15

int main(){
    float prova1[NUM_ALUNOS], prova2[NUM_ALUNOS];
    int situacao[NUM_ALUNOS], media[NUM_ALUNOS];
    int i;

    for(i = 0; i < 3; i += 1){
        printf("Aluno %d\n", i + 1);
        printf("Prova 1: "); 
        scanf("%f", &prova1[i]);

        printf("Prova 2: "); 
        scanf("%f", &prova2[i]);

        media[i] = (prova1[i] + prova2[i]) / 2;
        
        situacao[i] = (media[i] >= 7.0) ? 1 : 0;
    }  

    printf("Listagem dos alunos: \n");
    printf("Aluno\tProva 1\tProva 2\tMedia\tSituacao\n");

    for(i = 0; i < 3; i += 1){
        printf("%d\t %.2f\t %.2f\t %d\t %s\n", i + 1, prova1[i], prova2[i], media[i], (situacao[i] == 1) ? "Aprovado" : "Reprovado");
    }

    return 0;
}