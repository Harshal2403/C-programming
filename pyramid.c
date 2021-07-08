#include<stdio.h>

void main()
{
    int i,j;

    for ( i = 1; i <= 5; i++)
    {
        for (j=1;j<=9;j++)
        {
            if ((i+j)<6)
            {
                printf(" ");
            }
            else
            {
                if ((j-i)>4)
                {
                    printf(" ");
                }
                else
                {
                    if ((i+j)%2!=0)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                    
                }
                
            }
        }
        printf("\n");
    }
    
}