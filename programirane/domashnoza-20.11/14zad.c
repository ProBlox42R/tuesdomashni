#include <stdio.h>

int main() {
    int n, max = 1, number;
    do {
        printf("\nEnter n: ");
        scanf("%d", &n);
    }while(n<=0);
    for(int i = 0; i<n; i++) {
        printf("\nEnter number: ");
        scanf("%d", &number);
        if(number%3==0) {
            if(max==1) {
                max=number;
            }
            else {
                if(max<number) {
                    max=number;
                }
            }
        }
    }
    if(max==1) {
        printf("NQMA");
    }
    else {
        printf("number is: %d\n", number);
    }
    return 0;
}