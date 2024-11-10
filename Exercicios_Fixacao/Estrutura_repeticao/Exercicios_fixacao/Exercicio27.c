#include <stdio.h>

int main(){
    int nota_1, nota_2, faltas;

    while (1) {

        printf("Digite a primeira nota: ");
        scanf("%d", &nota_1);

        printf("Digite a segunda nota: ");
        scanf("%d", &nota_2);

        printf("Digite o numero de faltas: ");
        scanf("%d", &faltas);

        if ((nota_1 >= 0 && nota_1 <= 10) && (nota_2 >= 0 && nota_2 <= 10) && (faltas >= 0)) {
            printf("Valores validos!!\n\n");
            break;
        }
        else
            printf("Valores invalidos! As notas devem ser de 0 ate 10 e as faltas maiores ou iguais a 0!\n\n");
    }

    return 0;
}
