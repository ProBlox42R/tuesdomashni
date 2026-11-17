#include <stdio.h>

int main() {
    int n, givenDigit, isFound = 0, digit;
    do {
        printf("\nEnter n: ");
        scanf("%d", &n);
    }while(n<=0);
    do {
        printf("\nEnter given digit: ");
        scanf("%d", &givenDigit);
    }while(givenDigit<0 || givenDigit>9);
    while(n>0&&!isFound) {
        digit = n%10;
        n = n/10;
        if(digit==givenDigit) {
            isFound = 1;
        }
    }
    if(isFound) {
        printf("TRUE\n");
    }
    else {
        printf("FALSE\n");
    }
    return 0;
}
