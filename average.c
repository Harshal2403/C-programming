#include<stdio.h>

void main()
{
    int n,i,temp,sum=0,avg;

    printf("Enter total numbers to calculate average: ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("Enter next number: ");
        scanf("%d",&temp);
        sum=sum+temp;
    }
    avg=sum/n;
    printf("Average of entered numbers = %d",avg);
}