#include <stdio.h>

int main() {
    int n = 1, goodCars, badCars;
    while (n>0) {
        printf("\nEnter car licence plate: ");
        scanf("%d", &n);
        if (n>0) {
        if (n>=1000 && n<=9999 && n % 100 != 0) {
            if (n%3==0 || n%10==5) {
            goodCars++;
            }
        }
        else {
            badCars++;
        }
    }
    else {
        continue;
    }
    }
    printf("Let in cars are: %d; ", goodCars);
    printf("Not let in cars are: %d\n", badCars);
    return 0;
}