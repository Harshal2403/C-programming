#include<stdio.h>

void main()
{
    int i,j,count;

    for (i = 1; i < 5; i++)
    {
        count=i;
        for (j = 1; j < 10; j++)
        {
            if (j<=4)
            {
                if (j>i)
                {
                    printf(" ");
                }
                else
                {
                    printf("%d",j);                    
                }
            }
            else
            {
                if (j-i>4)
                {
                    printf(" ");
                }
                else
                {
                    printf("%d",count);
                    count--;
                }
            }
            
        }
        printf("\n");
    }
    
}