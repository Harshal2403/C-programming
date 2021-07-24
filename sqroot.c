// Program to find square root of a number.
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float num,res;

    printf("Enter a number: ");
    scanf("%2f",&num);

    res=sqrt(num);
    printf("Square root of %2f is %2f.",num,res);
}