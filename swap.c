#include<stdio.h>

void main()
{
    int frst,scnd,temp;

    printf("Enter first number: ");
    scanf("%d",&frst);
    printf("Enter second number: ");
    scanf("%d",&scnd);

    printf("Before swapping,\nFirst number = %d\nSecond number = %d\n",frst,scnd);

    temp = frst;
    frst = scnd;
    scnd = temp;

    printf("After swapping,\nFirst number = %d\nSecond number = %d\n",frst,scnd);
}