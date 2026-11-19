#include <stdio.h>

int main() {
    int n, i = 0;
    do {
        printf("Enter normal n: ");
        scanf("%d", &n);
    }while(n<=0);
    while(n>0) {
        i = i + n%10;
        n = n/10;
    }
    printf("Digit sum of n: %d\n", i);
    return 0;
}
