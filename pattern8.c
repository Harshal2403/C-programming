#include<stdio.h>

void main()
{
    int i,j,bit;

    bit=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",bit);
            if (bit==1)
            {
                bit=0;
            }
            else if (bit==0)
            {
                bit=1;
            }
                        
        }
        printf("\n");
    }
}