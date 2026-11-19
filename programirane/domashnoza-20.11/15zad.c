#include <stdio.h>

int main() {
    int n, largestDigit = 0, digit;
    do {
        printf("\nEnter n: ");
        scanf("%d", &n);
    }while(n<=0);
    while(n>0) {
        digit = n%10;
        n = n/10;
        if(digit>largestDigit) {
            largestDigit = digit;
        }
    }
    printf("Largest Digit: %d\n", largestDigit);
    return 0;
}
