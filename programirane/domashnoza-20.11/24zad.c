#include <stdio.h>

int main() {
    int jud, score, sum, average, jud1 = 1.000000;
    do {
        printf("\nEnter judjes: ");
        scanf("%d", &jud);
    }while(jud<3);
    printf("\nEnter score: ");
    scanf("%d", &score);
    int max = score, min = score;
    for(int i = 0; i < jud-1; i++) {
        printf("\nEnter score: ");
        scanf("%d", &score);
        sum = sum + score;
        if(max<score) {
            max = score;
        }
        if (min>score) {
            min = score;
        }
    }
    sum = sum - min;
    sum = sum - max;
    jud1 = jud - 2.00;
    average = (float) sum / jud1;
    printf("The lowest result: %d\n", min);
    printf("The highest result: %d\n", max);
    printf("the sum is (debug): %d\n", sum);
    printf("the jud is (debug): %d\n", jud);
    printf("the jud1 is (debug): %f\n", jud - 2.00000);
    printf("Average: %.2f\n", average);
    return 0;
}