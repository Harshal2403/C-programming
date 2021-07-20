// Program to find power of a number
#include<stdio.h>

void main()
{
    int base,exp,pow=1,i;

    printf("Enter base value: ");
    scanf("%d",&base);
    printf("Enter exponent value: ");
    scanf("%d",&exp);

    for (i = 1; i <= exp; i++)
    {
        pow=pow*base;
    }
    printf("%d raised to power %d = %d",base,exp,pow);
}