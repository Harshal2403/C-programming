#include<stdio.h>

void main()
{
    int i,j,count;

    count=1;

    for (i=1;i<=5;i++)
    {
        for (j=1;j<=(2*i)-1;j++)
        {
            printf("%d ",count);
            if(i<=j)
            {
                count--;
            }
            else
            {
                count++;
            }

        }
        printf("\n");
        count=1;
    }
    
}