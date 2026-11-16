#include <stdio.h>

int main() {
    int a, b, c;
    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("\nEnter b: ");
    scanf("%d", &b);
    printf("\nEnter c: ");
    scanf("%d", &c);
    if(a>b) {
        if (a>c) {
            printf("The biggest is: %d\n", a);
        }
        else {
            printf("The biggest is: %d\n", c);
        }
    }
    else {
        if(b>c) {
            printf("The biggest is: %d\n", b);
        }
        else {
            printf("The biggest is: %d\n", c);
        }
    }
    return 0;
}