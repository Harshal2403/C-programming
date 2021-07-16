#include<stdio.h>

void main()
{
    int len,a,b,temp,i;

    printf("Enter the length of series: ");
    scanf("%d",&len);
    a=1;
    b=1;
    printf("%d  ",a);

    for (i = 0; i < (len-1); i++)
    {
        temp=a+b;
        a=b;
        b=temp;
        printf("%d  ",a);
    }
    
}