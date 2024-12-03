#include <stdio.h>

int main(){
    char vet[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    int i;

    for (i = 0; i <= 9; i += 1){
        printf("%d - %c\n", i, vet[i]);
    }


    return 0;
}