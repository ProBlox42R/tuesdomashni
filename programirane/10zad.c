#include <stdio.h>

int main() {
    int n, weight = 1, m = 0, digit;
    do {
        printf("\nEnter normal n: ");
        scanf("%d", &n);
    }while(n<=0);
    while(n>0) {
        digit = n%10;
        n = n/10;
        if(digit % 2 == 0) {
            m = m + digit * weight;
            weight = weight * 10;
        }
    }
    printf("Number made out of the digits dividable by two in n is: %d\n", m);
    return 0;
}