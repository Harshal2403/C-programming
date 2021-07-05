#include<stdio.h>

void main()
{
    int i;
    
    printf("Enter total numbers: ");
    scanf("%d",&i);

    do
    {
        printf("%d\n",i);
        i--;
    } while (i!=0);
    
}