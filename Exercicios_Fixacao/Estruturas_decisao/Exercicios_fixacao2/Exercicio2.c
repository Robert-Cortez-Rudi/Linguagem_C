#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);

    if ((nota1 < 0) || (nota1 > 10))
        printf("NOTA 1 invalida!");
    else {
        printf("Insira a segunda nota: ");
        scanf("%f", &nota2);
        if ((nota2 < 0) || (nota2 > 10))
            printf("NOTA 2 invalida!");
        else {
            printf("Insira a terceira nota: ");
            scanf("%f", &nota3);
            if ((nota3 < 0) || (nota3 > 10))
                printf("NOTA 3 invalida!");
            else {
                if ((nota1 < nota2) && (nota1 < nota3)) {
                    printf("\nNota desconsiderada: %.2f", nota1);
                    media = (nota2 + nota3) / 2;
                }
                else if ((nota2 < nota1) && (nota2 < nota3)){
                    printf("\nNota desconsiderada: %.2f", nota2);
                    media = (nota1 + nota3) / 2;
                }
                else if ((nota3 < nota1) && (nota3 < nota2)){
                    printf("\nNota desconsiderada: %.2f", nota3);
                    media = (nota1 + nota2) / 2;
                }
                printf("\nNota final (media aritmetica das duas maiores notas): %.2f", media);
                
                if (media >= 6.0)
                    printf("\nSituacao: APROVADO!");
                else if (media >= 4.0)
                    printf("\nSituacao: IFA!");
                else
                    printf("\nSituacao: REPROVADO!");
            }
        }
    }
    return 0;
}
