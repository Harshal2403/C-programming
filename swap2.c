// Program to swap two numbers without using third variable.
#include <stdio.h>

void main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("X = %d\n", x);
    printf("Y = %d", y);
}