#include<stdio.h>

void main()
{
    int a,sum;

    printf("Enter a number: ");
    scanf("%d",&a);

    sum=0;
    while (a!=0)
    {
        sum = sum + a%10;
        a=a/10;
    }
    
    printf("sum = %d\n",sum);
}