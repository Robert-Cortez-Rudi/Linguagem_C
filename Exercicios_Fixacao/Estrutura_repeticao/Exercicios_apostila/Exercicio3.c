#include <stdio.h>

int main(){
    int n = 1;

    /*for (n = 1; n <= 500; n++){
        if (n % 5 == 0)
            printf("%d ", n);
    }*/

   /*while (n <= 500) {
       if (n % 5 == 0)
           printf("%d ", n);
       n++;
   }*/

    do {
        if (n % 5 == 0)
            printf("%d ", n);
        n++;
    } while (n <= 500);

    return 0;
}
