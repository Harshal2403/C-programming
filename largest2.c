#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;    

    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("%d is bigger.\n",a);
    }
    else if (b>a)
    {
        printf("%d is bigger.\n",b);
    }
    else {
        printf("Both are equal.\n");
    }
    
}