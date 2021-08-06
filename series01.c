#include <stdio.h>

int fact(int);

int main()
{
    int n, i;

    printf("Enter length of series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d/%d.", fact(i), i);
        }
        else
        {
            printf("%d/%d + ", fact(i), i);
        }
    }

    return 0;
}

int fact(int n)
{
    int i, fact = 1;
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }

    return fact;
}