#include <stdio.h>

int main(){
    float atletas[10][5];
    int delegacao, atleta;
    float maior_altura[5] = {0, 0, 0, 0, 0};

    for (delegacao = 0; delegacao < 5; delegacao += 1){
        for (atleta = 0; atleta < 10; atleta += 1){
            printf("Digite a altura do atleta %d da delegacao %d: ", atleta + 1, delegacao + 1);
            scanf("%f", &atletas[atleta][delegacao]);
            if (atletas[atleta][delegacao] > maior_altura[delegacao]){
                maior_altura[delegacao] = atletas[atleta][delegacao];
            }
        }
    }

    for (delegacao = 0; delegacao < 5; delegacao += 1){
        printf("\nA maior altura da delegacao %d e: %.2f", delegacao + 1, maior_altura[delegacao]);
    }

    return 0;
}
