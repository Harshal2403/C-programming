// Program to check perfect number.
#include<stdio.h>

void main()
{
    int num,i,sum=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    for ( i = 1; i <= num/2; i++)
    {
        if (num%i==0)
        {
            sum=sum+i;
        }
        
    }
    
    if (sum==num)
        printf("%d is perfect number.",num);
    else
        printf("%d is not a perfect number.",num);
    
}