//Program to enter a number and print factors of that number
#include<stdio.h>
void main()
{
    int num,i;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Factors: ");
     for (i = 1; i <= num/2; i++)
     {
         if (num%i==0)
         {
             printf("%d  ",i);
         }
         
     }
       
}