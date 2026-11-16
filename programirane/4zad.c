#include <stdio.h>

int main() {
    int n, num;
    printf("Enter n: ");
    do {
        printf("\nEnter n: ");
        scanf("%d", &n);
    }while(n<=0);
    printf("test: ", n);
    return 0;
}