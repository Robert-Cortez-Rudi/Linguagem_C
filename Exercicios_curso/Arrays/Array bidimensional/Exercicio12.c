#include <stdio.h>

int main() {
    char nomesPlantas[50][100];  
    int estoquePlantas[50][2];    
    int i;

    printf("\nDigite os dados das 50 plantas:\n");
    for (i = 0; i < 5; i++) {  
        printf("\nDigite o nome da planta %d (sem espaços): ", i + 1);
        scanf("%s", nomesPlantas[i]);  

        printf("Digite o estoque atual da planta %d: ", i + 1);
        scanf("%d", &estoquePlantas[i][0]);

        printf("Digite o estoque mínimo da planta %d: ", i + 1);
        scanf("%d", &estoquePlantas[i][1]);
    }

    printf("\nPlantas com estoque baixo:\n");
    printf("Nome \t\t\t Estoque Atual \t Estoque Minimo\n");

    for (i = 0; i < 5; i++) {
        if (estoquePlantas[i][0] < estoquePlantas[i][1]) {
            printf("%s \t\t\t %d \t\t %d\n", nomesPlantas[i], estoquePlantas[i][0], estoquePlantas[i][1]);
        }
    }

    return 0;
}
