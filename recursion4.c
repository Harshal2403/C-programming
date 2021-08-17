#include <stdio.h>

int sum(int x, int y)
{
    if (x == 0)
        return y;
    else
        return sum(x - 1, x + y);
}
int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("(1+2+3+......+%d)+%d = %d", x, y, sum(x, y));

    return 0;
}