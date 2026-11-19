#include <stdio.h>

int main() {
    char n1, n2, n3, n4, n5;
    int h1, h2, h3, h4, h5, max;
    printf("\nEnter first letter of name: ");
    scanf("%c", &n1);
    do {
        printf("\nEnter height: ");
        scanf("%d", &h1); 
    }while(h1<=100 || h1>=250);
    max = h1;
    printf("\nEnter first letter of name: ");
    scanf(" %c", &n2);
    do {
        printf("\nEnter height: ");
        scanf(" %d", &h2); 
    }while(h2<100 || h2>250);
    if (h1<h2) {
        max = h2;
    }
    printf("\nEnter first letter of name: ");
    scanf(" %c", &n3);
    do {
        printf("\nEnter height: ");
        scanf(" %d", &h3); 
    }while(h3<=100 || h3>=250);
    if (h2<h3) {
        max = h3;
    }
    printf("\nEnter first letter of name: ");
    scanf(" %c", &n4);
    do {
        printf("\nEnter height: ");
        scanf(" %d", &h4); 
    }while(h4<=100 || h4>=250);
        if (h3<h4) {
        max = h4;
        }
    printf("\nEnter first letter of name: ");
    scanf(" %c", &n5);
    do {
        printf("\nEnter height: ");
        scanf(" %d", &h5); 
    }while(h5<=100 || h5>=250);
    if (h4<h5) {
        max = h5;
    }
    if (max==h5) {
        printf("\n%c \n", n5);
    }else if (max==h4) {
        printf("%c \n", n5);
    }else if (max==h3) {
        printf("%c \n", n5);
    }else if (max==h2) {
        printf("%c \n", n5);
    }else if (max==h1) {
        printf("%c \n", n5);
    }
    return 0;
}