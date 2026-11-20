#include <stdio.h>

int main()
{
    char n, maxN;
    int h, max;
    int i = 0;
    printf("\nEnter first letter of name: ");
    scanf(" %c", &n);
    do
    {
        printf("\nEnter height: ");
        scanf(" %d", &h);
    } while (h <= 100 || h >= 250);
    max = h;
    for (int i = 0; i < 4; i++)
    {
        printf("\nEnter first letter of name: ");
        scanf(" %c", &n);
        printf("\nEnter height: ");
        scanf("%d", &h);
        if (max <= h)
        {
            max = h;
            maxN = n;
        }
    }
    printf("height: %c\n", maxN);
    return 0;
}