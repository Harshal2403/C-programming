#include<stdio.h>

int add(int n);

void main()
{
    int n,result;

    printf("Enter a number: ");
    scanf("%d",&n);

    result = add(n);
    printf("Sum = %d",result);
}

int add(int n)
{
    static int sum=0;

    if (n==0)
    {
        return 0;
    }
    sum=sum+(n%10)+add(n/10);
    return sum;
}