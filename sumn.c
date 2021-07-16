#include<stdio.h>

void main()
{
    int n,i,sum,value;
    sum=0;

    printf("Enter total numbers for addition: ");
    scanf("%d",&n);
    
    for ( i = 1; i <= n; i++)
    {
        printf("Enter next value: ");
        scanf("%d",&value);
        sum=sum+value;
    }
    printf("sum = %d",sum);
}