// 69. Program to find largest number of 'n' numbers.
#include<stdio.h>

void main()
{
    int n,big,num,i;

    printf("Enter total numbers: ");
    scanf("%d",&n);

    printf("Enter %d number: ",1);
    scanf("%d",&big);

    for (i = 2; i <= n; i++)
    {
        printf("Enter %d number: ",i);
        scanf("%d",&num);

        if (num>big)
            big=num;
        
    }
    printf("Largest among entered numbers: %d",big);
}