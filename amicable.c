//Program to take two numbers and check whether they are amicable numbers or not
#include<stdio.h>
void main()
{
    int num1,num2,i,sum1=0,sum2=0;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    for (i = 1; i <= num1/2; i++)
    {
        if (num1%i==0)
        {
            sum1=sum1+i;
        }        
    }
    for (i = 1; i <= num2/2; i++)
    {
        if (num2%i==0)
        {
            sum2=sum2+i;
        }        
    }
    if (num1==sum2 && num2==sum1)
    {
        printf("%d and %d are amicable numbers.",num1,num2);
    }
    else
    {
        printf("%d and %d are not amicable numbers.",num1,num2);
    }
    
}