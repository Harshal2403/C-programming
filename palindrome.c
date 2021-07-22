// Program to check whether the number is palindrome or not.
#include<stdio.h>

void main()
{
    int num,temp,rev=0;

    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;

    while (temp!=0)
    {
        rev=(rev*10)+(temp%10);
        temp=temp/10;        
    }
    if (num==rev)
        printf("%d is palindrome number.",num);
    else
        printf("%d is not a palindrome number.",num);    
}