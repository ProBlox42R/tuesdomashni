#include <stdio.h>

int main() {
    int n;
    do {
        printf("\nEnter n: ");
        scanf("%d", &n);
    }while(n<=0);
    int primeDividerCount=0, divider=2, halfN;
    halfN = n / 2;
    while (divider<=halfN) {
        if (n%divider==0) {
                int dividerOfDivider=2;
                int halfDivider=divider/2;
                int isPrime=1;
            while (dividerOfDivider<=halfDivider && isPrime) {
              if (divider%dividerOfDivider==0) {
                isPrime=0;
              }
              dividerOfDivider++;  
            }
            if (isPrime) {
                primeDividerCount++;
                printf("Divider: %d\n", divider);
            }

        }
        divider++;
    }
    printf("primeDividercount: %d\n", primeDividerCount);
}
