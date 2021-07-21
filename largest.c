// 68. Program to find largest among three numbers using ternary operator
#include<stdio.h>

void main()
{
    int a,b,c,result;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    result= (a>b && a>c?a:b>c?b:c);
    printf("%d is largest.",result);
}