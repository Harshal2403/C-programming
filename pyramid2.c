#include<stdio.h>

void main()
{
    int i,j;

    for (i = 1; i < 6; i++)
    {
        for ( j = 1; j < 10; j++)
        {
            if ((i+j)<=5)
            {
                printf(" ");
            }
            else if ((j-i)>=5)
            {
                printf(" ");
            }
            else if ((i+j)%2!=0)
            {
                printf("A");
            }                        
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
}