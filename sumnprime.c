// Program to print sum of 'n' prime numbers.

#include <stdio.h>

void main()
{
    int n, i, j, sum = 0, count = 0;

    printf("Enter total number of values: ");
    scanf("%d", &n);

    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else
            {
                // printf("%d+", i);
                sum = sum + i;
                count++;
                break;
            }
        }
        if (count == n)
        {
            break;
        }
    }
    printf("SUM = %d", sum);
}