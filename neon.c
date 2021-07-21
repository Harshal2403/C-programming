// Program to check whether the number is neon number or not.
#include<stdio.h>

void main()
{
    int num,sq,sum=0;

    printf("Enter a number: ");
    scanf("%d",&num);
    sq=num*num;
    
    while (sq!=0) 
    {
        sum=sum+sq%10;
        sq=sq/10;
    }        
    
    if(sum==num)
        printf("%d is a neon number.",num);
    else
        printf("%d is not a neon number.",num);
}