#include<stdio.h>

void main()
{
    int n,i,fact;

    printf("Enter a number: ");
    scanf("%d",&n);
    fact=1;

    for ( i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    printf("%d",fact);        
}