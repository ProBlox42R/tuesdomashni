#include <stdio.h>

int main() {
    int n, i = 0;
    do {
        printf("Enter normal n: ");
        scanf("%d", &n);
    }while(n<=0);
    do {
        i = i + 1;
        n = n/10;
    }while(n>0);
    printf("Digits in number: %d\n", i);
    return 0;
}
