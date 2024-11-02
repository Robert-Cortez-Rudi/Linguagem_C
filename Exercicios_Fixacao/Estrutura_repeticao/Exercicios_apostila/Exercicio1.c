#include <stdio.h>

int main(){
    int n=1;

    /*for (n=1; n <= 100; n++) {
        printf("%d ", n);
    }*/

    /*while (n <= 100) {
        printf("%d ", n);
        n++;
    }*/

    do {
        printf("%d ", n);
        n++;
    } while (n <= 100);

    return 0;

}
