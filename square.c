#include<stdio.h>

void main()
{
    int i,r,sq;

    printf("Enter range for squares: ");
    scanf("%d",&r);

    for (i = 1; i <= r; i++)
    {
        sq=i*i;
        printf("Square of %d = %d\n",i,sq);
    }
    
}