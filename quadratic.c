#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float a,b,c,D,real;
    double r1,r2,imag;

    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);

    D = (b*b) - (4*a*c);

    if(D>0)
    {
        printf("Real and distinct roots!!\n");
        r1=((-b)+sqrt(D))/(2*a);
        r2=((-b)-sqrt(D))/(2*a);
        printf("First root: %.2f\n",r1);
        printf("Second root: %.2f\n",r2);
    }
    else if (D==0)
    {
        printf("Real and equal roots!!\n");
        r1=((-b)+sqrt(D))/(2*a);
        r2=((-b)-sqrt(D))/(2*a);
        printf("First root: %.2f\n",r1);
        printf("Second root: %.2f\n",r2);
    }
    else
    {
        printf("Imaginary roots!!\n");
        real = (-b)/(2*a);
        imag = sqrt(-D)/(2*a);

        printf("First root: %.2f+i%.2f\n",real,imag);
        printf("Second root: %.2f-i%.2f\n",real,imag);
    }
    

}