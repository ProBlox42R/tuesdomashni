#include <stdio.h>

int main() {
    int a, b, c;
    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("\nEnter b: ");
    scanf("%d", &b);
    printf("\nEnter c: ");
    scanf("%d", &c);
    int max = a;
    if(max<b) {
        max = b;
    }
    if(max<c) {
        max=c;
    }
    printf("The biggest number is: %d\n", max);
    return 0;
}