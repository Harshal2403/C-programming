#include<stdio.h>

void main()
{
    int rollno, m1,m2,m3,total;
    float avg;

    printf("Enter the roll number: ");
    scanf("%d",&rollno);

    printf("Enter the marks(out of 100) of first subject: ");
    scanf("%d",&m1);
    printf("Enter the marks(out of 100) of second subject: ");
    scanf("%d",&m2);
    printf("Enter the marks(out of 100) of third subject: ");
    scanf("%d",&m3);

    total = m1+m2+m3;
    avg = total/3.0;

    printf("Grand Total(out of 300): %d\n",total);
    printf("Average of 3 subjects: %f\n",avg);

    if (avg>90)
    {
        printf("Grade: O\n");
    }
    else if (avg>80 && avg<=90)
    {
        printf("Grade: A+\n");
    }    
    else if (avg>80)
    {
        printf("Grade: A\n");
    }
    else if (avg>60 && avg <=80)
    {
        printf("Grade: B\n");
    }
    else if (avg>40 && avg <=60)
    {
        printf("Grade: C\n");
    }
    else if (avg>33 && avg<=40)
    {
        printf("Grade: D\n");
    }
    else 
    {
        printf("Fail\n");
    }
    
    
    
    
}