#include <stdio.h>

int main() {
    int n, digit, digitEven = 0, digitOdd = 0;
    printf("\nEnter n: ");
    scanf("%d", &n);
    while (n!=0) {
        digit = n%10;
        digitEven = 0;
        digitOdd = 0;
        if (digit%2==0) {   //дали числото е четно (ако не нечетно)
            digitEven = 1;
            if (digitOdd == 1) {
                n=n/10;
                printf("debug: digitOdd: %d\n", digitOdd);
                printf("debug: digitEven1: %d\n", digitEven);
                printf("debug: n: %d\n", n);
            }
            else {
                printf("NE");
                printf("debug: digitOdd: %d\n", digitOdd);
                printf("debug: digitEven1: %d\n", digitEven);
                printf("debug: n: %d\n", n);
                break;
            }
        }
        else {
            digitOdd=1;
            if (digitEven==1) {
                printf("debug: digitOdd: %d\n", digitOdd);
                printf("debug: digitEven1: %d\n", digitEven);
                printf("debug: n: %d\n", n);
                n = n/10;
            }
            else {
                printf("NE");
                printf("debug: digitOdd: %d\n", digitOdd);
                printf("debug: digitEven1: %d\n", digitEven);
                printf("debug: n: %d\n", n);
                break;
            }
        }
    }
    printf("DA\n");
    return 0;
}