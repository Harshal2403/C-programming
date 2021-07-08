#include<stdio.h>

void main()
{
    char ch;
    int i,j;

    ch = 'A';
    for (i = 1; i < 6; i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%2c",ch);
            ch++;
        }
        printf("\n");
    }
    
}