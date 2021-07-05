#include<stdio.h>

void main()
{
    int a,temp,sum,cpy;

    printf("Enter a number: ");
    scanf("%d",&a);

    cpy=a;
    sum=0;

    while (cpy!=0)
    {
        temp=cpy%10;
        sum+=(temp*temp*temp);
        cpy=cpy/10;        
    }
    if (sum==a)
    {
        printf("%d is armstrong number.\n",a);
    }
    else
    {
        printf("%d is not armstrong number.\n",a);
    }
    
}
    


