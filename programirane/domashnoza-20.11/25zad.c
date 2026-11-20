#include <stdio.h>

int main() {
    int m, weight = 1, thrownCount = 0, thrownApples = 0, sum = 0, boxCount = 0;
    do {
        printf("\nEnter weight a box can carry: ");
        scanf("%d", &m);
    }while(m<=0);

    while (thrownCount!=3 || weight !=0) {
            printf("\nEnter apple weight: ");
            scanf("%d", &weight);
            if (weight<50) {
                thrownApples++;
                thrownCount++;
            }
            else {
                thrownCount = 0;
            }
            if (weight==0) {
                break;
            }
        sum = sum + weight;
        if (sum > m) {
            boxCount++;
            sum = weight;
        }
    }
    if(thrownCount==3) {
        printf("AAAAAAA FAIL!!!!! There is something wrong with the line");
    }
    printf("Box Count: %d\n", boxCount);
    printf("Thrown Apples: %d\n", thrownApples);
    return 0;
}