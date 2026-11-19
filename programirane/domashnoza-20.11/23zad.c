#include <stdio.h>

int main() {
    int maxLev, lev = 1, step, sum, currentLev = 1;
    printf("\nThe max level: ");
    scanf("%d", &maxLev);
    while(lev!=0) {
        do {
            printf("\nEnter level: ");
            scanf("%d", &lev);
            if (lev>maxLev || lev<0) {
                printf("WRONG LEVEL! The elevator remains on: %d\n", currentLev);
            }
        }while(lev>maxLev || lev<0);
        if (lev==0) {
            continue;
        }
        step = lev - currentLev;
        if (step<0) {
            step=-step;
        }
        sum = sum + step;
        currentLev = lev;
    }
    printf("The elevator ran: %d levels\n", sum);
    return 0;
}