#include<stdio.h>

void main() 
{
    int i,j,count;

    for (i = 1; i < 6; i++)
    {
        count=i;
        for (j = 1; j < 10; j++)
        {
            if ((i+j)<=5)
            {
                printf(" ");
            }
            else if ((j-i)>4)
            {
                printf(" ");
            }
            else if ((i+j)%2!=0)
            {
                printf(" ");
            }                        
            else
            {
                printf("%d ",count);
                count--;
            }
        }        
        printf("\n");
    }
    
}