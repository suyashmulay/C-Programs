#include<stdio.h>

int main() {
    int a, b, sub = 0;

    printf("Enter a value of two no : ");
    scanf("%d %d", &a, &b);

    sub = a -b;

    printf("sub = %d", sub);

    return 0;
}