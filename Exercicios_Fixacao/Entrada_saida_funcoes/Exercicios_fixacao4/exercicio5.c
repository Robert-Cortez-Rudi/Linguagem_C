#include <stdio.h>

float calcularMedia(float n1, float n2, float n3){
    return (n1 + n2 + n3) / 3;
}

int main(){
    float nota1, nota2, nota3, media;
    int situacao;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    media = calcularMedia(nota1, nota2, nota3);
    situacao = (media >= 7.00);
    printf("Sendo: 0 se REPROVADO e 1 se APROVADO\n");
    printf("%.2f  [%d]", media, situacao);

    return 0;
}
