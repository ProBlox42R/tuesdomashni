#include <stdio.h>

int main() {
    int n, number;
    do {
        printf("\nEnter normal n: ");
        scanf("%d", &n);
    }while(n<=0);
    printf("\nEnter number: ");
    scanf("%d", &number);
    int max = number;
    for(int i = 0; i < n-1; i++) {
        printf("\nEnter number: ");
        scanf("%d", &number);
        if(max<number) {
            max = number;
        }
    }
    printf("The biggest of n numbers is: %d\n", max);
    return 0;
}