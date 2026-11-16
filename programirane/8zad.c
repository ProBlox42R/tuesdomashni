#include <stdio.h>

int main() {
    int n, f1 = 0, f2 = 1, nextF = -1, i = 2;
    do {
        printf("\nEnter n that is bigger than 2: ");
        scanf("%d", &n);
    }while(n<=2);
    printf("The numbers are: \n0\n1\n");
    while(i<n) {
        nextF = f1 + f2;
        f1 = f2;
        f2 = nextF;
        i++;
        printf("%d\n", nextF);
    }
    return 0;
}
