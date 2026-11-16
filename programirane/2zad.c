#include <stdio.h>

int main() {
    int a, b = 0;
    printf("Enter a and then b: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Value a=%d\n", a);
    printf("Value b=%d\n", b);
    return 0;
}