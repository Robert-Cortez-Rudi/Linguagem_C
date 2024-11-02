#include <stdio.h>

int main() {
    int num_turmas, num_alunos, aprovados, reprovados;
    float nota, soma_notas, media_turma, percentual_reprovados;

    printf("Digite o numero de turmas: ");
    scanf("%d", &num_turmas);

    for (int turma = 1; turma <= num_turmas; turma++) {
        printf("\nTurma %d:\n", turma);

        printf("Digite o numero de alunos na turma: ");
        scanf("%d", &num_alunos);

        aprovados = 0;
        reprovados = 0;
        soma_notas = 0.0;

        for (int aluno = 1; aluno <= num_alunos; aluno++) {
            printf("Digite a nota do aluno %d: ", aluno);
            scanf("%f", &nota);

            soma_notas += nota;

            if (nota >= 7.0) {
                aprovados += 1;
            } else {
                reprovados += 1;
            }
        }

        media_turma = soma_notas / num_alunos;
        percentual_reprovados = (reprovados /  (float) num_alunos) * 100;

        printf("\nResultados para a Turma %d:\n", turma);
        printf("Quantidade de alunos aprovados: %d\n", aprovados);
        printf("Media da turma: %.2f\n", media_turma);
        printf("Percentual de reprovados: %.2f%%\n", percentual_reprovados);
    }

    return 0;
}
