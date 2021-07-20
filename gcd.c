//Program to find greatest common divisor of two numbers.
#include<stdio.h>

void main()
{
    int a,b,i,max;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    
    if (a>b)
        max=a;
    else
        max=b;
    
    for (i=max;i>0;i--)
    {
        if (a%i==0 && b%i==0)
        {
            printf("%d is greatest common factor of %d and %d.",i,a,b);
            break;
        }
        
    }
    
}