#include <stdio.h>

int main() {
    int n, lastCiN = -1, isAlternating = 1, d;
    do {
        printf("Enter n: ");
        scanf("%d", &n);
    }while(n<=0);
    while(n!=0) {
        d=n%10;
        int currentCiN = d%2;
        if (lastCiN == currentCiN) {
            isAlternating = 0;
            break;
        }
        
        n = n/10;
      
        lastCiN = currentCiN;
    }
    if (isAlternating) {
        printf("YES!\n");
    }
    else {
        printf("NO :(\n");
    }
    return 0;
}