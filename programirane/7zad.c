#include <stdio.h>

int main() {
    int a, N = 1, isNegative = 0, product = 1, i = 0;
    do {
        printf("Enter a that is not 0: ");
        scanf("%d", &a);
    }while(a==0);
    printf("Enter N (a^N): ");
    scanf("%d", &N);
    if(N<0) {
        isNegative = 1;
        N = -N;
    }
    while(i<N) {
        product = product * a;
        i++;
    }
    if(isNegative == 1) {
        printf("The product is: %f\n", 1.0000 / product);
    }
    else {
        printf("The product is: %d\n", product);
    }
    return 0;
}