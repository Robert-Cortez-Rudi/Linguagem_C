#include <stdio.h>

int main(){
    float altura;
    char categoria;

    printf("Insira a altura: ");
    scanf("%f", &altura);

    if (altura >= 1.90)
        categoria = "Muito alto";
    else if (altura >= 1.70)
        categoria = "Alto";
    else if (altura >= 1.50)
        categoria = "Mediano";
    else 
        categoria = "Baixo";
    
    return 0;

}
