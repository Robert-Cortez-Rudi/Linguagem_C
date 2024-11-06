#include <stdio.h>

int main(){
    int n;

    for (n = 1; n <= 100; n++){
        if (n % 3 == 0)
            printf("\nIFSP");
        else if (n % 5 == 0)
            printf("\nCAR");
        else if (n % 3 == 0 && n % 5 == 0)
            printf("\nIFSP-CAR");
        else
            printf("\n%d", n);
    }

    return 0;
}
