#include <stdio.h>

int main(){
    int n = 100;

    /*for (n=100; n >= 1; n--){
        if (n % 2 == 0)
            printf("%d ", n);
    }*/

   /*while (n >= 1) {
       if (n % 2 == 0)
           printf("%d ", n);
       n--;
   }*/

    do {
        if (n % 2 == 0)
            printf("%d ", n);
        n--;
    } while (n >= 1);

    return 0;
}
