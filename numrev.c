#include<stdio.h>
void main()
{
    int a,temp;

    printf("Enter a number: ");
    scanf("%d",&a);

    temp = 0;

    while (a!=0)
    {
        temp = a%10;
        a = a/10;
        printf("%d",temp);
    }
    printf("\n");
    
}