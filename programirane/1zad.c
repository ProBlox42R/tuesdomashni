#include <stdio.h>

int main() {
    int a, b, c = 0;
    printf("Enter a and then b: ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("Value a=%d\n", a);
    printf("Value b=%d\n", b);
    return 0;
}