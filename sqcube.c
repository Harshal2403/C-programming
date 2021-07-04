#include<stdio.h>

void main() 
{
    int num,sqre,cube;

    printf("Please enter a number: ");
    scanf("%d",&num);

    sqre = num * num;
    cube = num * num * num;

    printf("Square of %d is %d\n",num,sqre);
    printf("Cube of %d is %d\n",num,cube);
}