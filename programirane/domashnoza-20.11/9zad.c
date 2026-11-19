#include <stdio.h>

int main() {
    int m = 0, n, digit;
    do {
        printf("\nEnter normal n: ");
        scanf("%d", &n);
    }while(n<=0);
    while(n>0) {
        digit = n%10;
        m = m * 10 + digit;
        n = n / 10;
    }
    printf("M is: %d\n", m);
    return 0;
}
