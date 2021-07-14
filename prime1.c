#include<stdio.h>

void main()
{
    int num,i,status=1;    

    printf("Enter a positive number: ");
    scanf("%d",&num);

    for ( i = (num-1); i >1; i--)
    {
        if ((num%i)==0)
        {
            printf("%d is not prime number!!",num);
            status=0;
            break;
        }
            
    }
    if (status==1)
    {
        printf("%d is prime number!!",num);
    }
    
    
}