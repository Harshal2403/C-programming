#include <stdio.h>
#include <conio.h>
void calTime(int n);

void main()
{
    int wt;
    printf("Enter the weight of clothes (in grams) - ");
    scanf("%d", &wt);
    calTime(wt);
    getch();
}

void calTime(int n)
{
    if (n == 0)
        printf("Time Estimated : 0 Minutes");
    else if (n > 0 && n <= 2000)
        printf("Time Estimated : 25 Minutes");
    else if (n > 2000 && n <= 4000)
        printf("Time Estimated : 35 Minutes");
    else if (n > 4000 && n <= 7000)
        printf("Time Estimated : 45 Minutes");
    else
        printf("INVALID INPUT");
}