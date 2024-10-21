#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Entre com a data (formato dd/mm/yyyy): ");

    scanf("%d %d %d", &dia, &mes, &ano);

    if ((mes < 0) || (mes > 12))
        printf("%.2d/%.2d/%.4d = Data invalida!", dia, mes, ano);
    else {
        if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)) {
            if (dia <= 31 && dia > 0)
                printf("%.2d/%.2d/%.4d = Data valida!", dia, mes, ano);
            else 
                printf("%.2d/%.2d/%.4d = Data invalida!!", dia, mes, ano);
        }
        else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)) {
            if (dia <= 30 && dia > 0)
                printf("%.2d/%.2d/%.4d = Data valida!", dia, mes, ano);
            else 
                printf("%.2d/%.2d/%.4d = Data invalida!!", dia, mes, ano);
        }
        else {
            if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)) {
                if (dia <= 29 && dia > 0)
                    printf("%.2d/%.2d/%.4d = Data valida!", dia, mes, ano);
                else
                    printf("%.2d/%.2d/%.4d = Data invalida!!", dia, mes, ano);
            }
            else {
                if (dia <= 28 && dia > 0)
                    printf("%.2d/%.2d/%.4d = Data valida!", dia, mes, ano);
                else      
                    printf("%.2d/%.2d/%.4d = Data invalida!!", dia, mes, ano);
            }
        }
    }

    return 0;
}
