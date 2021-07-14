#include<stdio.h>

void main()
{
    int range,i,j,flag=1;

    printf("Enter total numbers: ");
    scanf("%d",&range);

    for (i = 2; i <=range; i++)
    {
        flag=1;
        for (j = 2; j < i/2; j++)
        {
            if (i%j == 0)
            {
                flag=0;
                break;
            }
            
        }
        if (flag==1)
        {
            printf("%d  ",i);            
        }
        
        
    }
    
}