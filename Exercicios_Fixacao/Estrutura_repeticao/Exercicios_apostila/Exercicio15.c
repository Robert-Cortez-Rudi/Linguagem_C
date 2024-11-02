#include <stdio.h>

int main() {
    int idade;
    int menor_21 = 0, maior_50 = 0;

    while (1) {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade == 0) 
            break;
        else if (idade < 21) 
            menor_21 += 1;  
        else if (idade >= 50) 
            maior_50 += 1;
        
    }

    printf("\nForam informados %d pessoas com menos de 21 anos.\n", menor_21);
    printf("Foram informados %d pessoas com mais de 50 anos.\n", maior_50);

    return 0;
}
