#include <stdio.h>

int main(){
    int num_x, num_y;

    while (1) {
        printf("Digite o primeiro numero X: ");
        scanf("%d", &num_x);

        printf("Digite o segundo numero Y: ");
        scanf("%d", &num_y);

        if ((num_x % 2 == 0) && (num_y % 2 == 1)) {
            printf("Valores validos!!\n\n");
            break;
        }
        else
            printf("Valores invalidos! O numero X deve ser par e o numero Y impar!\n\n");
    }




    return 0;
}