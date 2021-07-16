#include<stdio.h>

void main()
{
    int a,i,temp,sum;
    sum=0;

    printf("Enter a number: ");
    scanf("%d",&a);

    while (a!=0)
    {
        temp=a%10;
        a=a/10;
        sum=sum+temp;
    }
    printf("Sum = %d",sum);
}