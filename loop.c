#include<stdio.h>

void main()
{
    int i,n;
    i=1;

    printf("Enter total numbers: ");
    scanf("%d",&n);

    while (i!=n+1)
    {
        printf("%d\n",i);
        i++;
    }
    
}