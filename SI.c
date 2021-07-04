#include<stdio.h>

void main()
{
    float p,r,t,si;

    printf("Enter the Principle amount: ");
    scanf("%f",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the total time      : ");
    scanf("%f",&t);

    si = (p*r*t)/100;
    printf("The simple interest = %f\n",si);

}