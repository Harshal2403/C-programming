// Program to check niven number(Harshad number).
#include<stdio.h>

void main()
{
    int num,i,temp=0;

    printf("Enter a number: ");
    scanf("%d",&num);
    i=num;

    while (i!=0)
    {
        temp=temp+ i%10;
        i=i/10;
    }
    if (num%temp==0)
    {
        printf("%d is Niven number.",num);
    }
    else
    {
        printf("%d is not Niven Number.",num);
    }
    
}