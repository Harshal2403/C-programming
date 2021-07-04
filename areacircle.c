#include<stdio.h>

void main() 
{
    float rad,pi,area;
    pi=3.14;

    printf("Enter the value of radius: ");
    scanf("%f",&rad);

    area = pi * rad * rad;
    printf("Area of circle = %f\n",area);

}