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
            printf("\nThe biggest is: %d", a);
        }
        else {
            printf("\nThe biggest is: %d", c);
        }
    }
    else {
        if(b>c) {
            printf("\nThe biggest is: %d", b);
        }
        else {
            printf("\nThe biggest is: %d", c);
        }
    }
    return 0;
}