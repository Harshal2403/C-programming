#include<stdio.h>

void main()
{
    int n,i,sum,arr[100];
    sum=0;

    printf("Enter total numbers for addition: ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("Enter next number: ");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum = %d",sum);
}