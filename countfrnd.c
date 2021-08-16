#include <stdio.h>

int countfrnd(int n)
{
    int a = 1, b = 2, c = 0, i;

    if (n <= 2)
    {
        return n;
    }
    else
    {
        for (i = 3; i < n + 1; i++)
        {
            c = b + (i - 1) * a;
            a = b;
            b = c;
        }
        return c;
    }
}
int main()
{
    int n;

    printf("Enter number of friends participating: ");
    scanf("%d", &n);

    printf("Total %d number of ways to pair up.\n", countfrnd(n));
    return 0;
}