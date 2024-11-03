#include <stdio.h>

int main(){
    int n = -50;

    /*for (n = -50; n <= 50; n++){
        printf("%d ", n);
    }*/

   /*while (n <= 50) {
       printf("%d ", n);
       n++;
   }*/

    do {
        printf("%d ", n);
        n++;
    } while (n <= 50);
   
    return 0;
}
