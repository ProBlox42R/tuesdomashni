#include <stdio.h>

int main() {
    int n;
    do {
        printf("\nEnter n: ");
        scanf("%d", &n);
    }while(n<=0);
    int divider=2, halfN=n/2, isPrime = 1;
    while (divider<=halfN && isPrime) {
        if (n%divider == 0) {
            isPrime = 0;
        }
        divider++;
    }
    if (isPrime) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }
    return 0;
}