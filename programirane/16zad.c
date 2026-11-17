#include <stdio.h>

int main() {
    int n, givenDigit, digit, givenDigitFrequency=0;
    do {
        printf("\nEnter n: ");
        scanf("%d", &n);
    }while(n<=0);
    do {
    printf("\nEnter given digit: ");
    scanf("%d", &givenDigit);
    }while(givenDigit<0 || givenDigit>9);

    while(n>0) {
        digit = n%10;
        n = n/10;
        if(digit==givenDigit) {
            givenDigitFrequency++;
        }
    }
    printf("Frequency: %d\n", givenDigitFrequency);
    return 0;
}
