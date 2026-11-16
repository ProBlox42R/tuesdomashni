#include <stdio.h>

int main() {
    int n, sum = 0;
    do {
        printf("\nEnter n: ");
        scanf("%d", &n);
    }while(n<=0);
    for(int i = 0, num; i<n; i++) {
        printf("\nEnter num: ");
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("sum is: %d\n", sum);
    return 0;
}
