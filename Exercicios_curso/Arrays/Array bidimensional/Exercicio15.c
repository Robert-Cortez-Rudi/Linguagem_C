#include <stdio.h>
#define NUM_ALUNOS 10

int main() {
    int dados[NUM_ALUNOS][4]; 
    int codigo_curso_pesquisa, i;
    int melhor_aluna_cr = 0; 
    int maior_cr = 0;        

    printf("Digite os dados dos %d alunos (matricula, sexo [0=feminino, 1=masculino], CR):\n", NUM_ALUNOS);
    for (i = 0; i < NUM_ALUNOS; i += 1) {
        printf("Aluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &dados[i][0]);
        printf("Sexo: ");
        scanf("%d", &dados[i][1]);
        printf("CR: ");
        scanf("%d", &dados[i][3]);

        dados[i][2] = (dados[i][0] / 1000) % 1000;
    }

    printf("\nDigite o codigo do curso para pesquisa: ");
    scanf("%d", &codigo_curso_pesquisa);

    for (i = 0; i < NUM_ALUNOS; i += 1) {
        if (dados[i][2] == codigo_curso_pesquisa && dados[i][1] == 0) { 
            if (dados[i][3] > maior_cr) { 
                maior_cr = dados[i][3];
                melhor_aluna_cr = i;
            }
        }
    }

    if (melhor_aluna_cr != 0) {
        printf("\nA aluna com o maior CR no curso %d e:\n", codigo_curso_pesquisa);
        printf("Matricula: %d\n", dados[melhor_aluna_cr][0]);
        printf("CR: %d\n", dados[melhor_aluna_cr][3]);
    } else {
        printf("\nNao ha alunas no curso %d.\n", codigo_curso_pesquisa);
    }

    return 0;
}
