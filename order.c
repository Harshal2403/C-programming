#include<stdio.h>

void main()
{
    int a,b,c;

    printf("Enter the value a: ");
    scanf("%d",&a);
    printf("Enter the value b: ");
    scanf("%d",&b);
    printf("Enter the value c: ");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        if (b>c)
        {
            printf("Descending order: %d > %d > %d.\n",a,b,c);
            printf("Ascending order: %d < %d < %d.\n",c,b,a);
        }
        else
        {
            printf("Descending order: %d > %d > %d.\n",a,c,b);
            printf("Ascending order: %d < %d < %d.\n",b,c,a);
        }
        
    }
    else if (b>a && b>c)
    {
        if (a>c)
        {
            printf("Descending order: %d > %d > %d.\n",b,a,c);
            printf("Ascending order: %d < %d < %d.\n",c,a,b);
        }
        else
        {
            printf("Descending order: %d > %d > %d.\n",b,c,a);
            printf("Ascending order: %d < %d < %d.\n",a,c,b);
        }
    }
    else {
        if (b>a)
        {
            printf("Descending order: %d > %d > %d.\n",c,b,a);
            printf("Ascending order: %d < %d < %d.\n",a,b,c);
        }
        else
        {
            printf("Descending order: %d > %d > %d.\n",c,a,b);
            printf("Ascending order: %d < %d < %d.\n",b,a,c);
        }
    }
    
    

}