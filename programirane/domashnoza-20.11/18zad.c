#include <stdio.h>

int main() {
    int n, dividerCount = 0, divider = 2, halfN;
    do {
        printf("\nEnter n: ");
        scanf("%d", &n);
    }while(n<=0);
    halfN = n/2;
    while(divider<=halfN) {
        if(n%divider == 0) {
            dividerCount++;
            printf("Divider: %d\n", divider);
        }
        divider++;
    }
    printf("The dividerCount is: %d\n", dividerCount);
    return 0;
}
