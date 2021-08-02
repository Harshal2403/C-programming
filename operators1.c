#include <stdio.h>

int main()
{
    int a = 10, b = 4, res;

    res = a + b;
    printf("%d + %d = %d\n", a, b, res);

    res = a - b;
    printf("%d - %d = %d\n", a, b, res);

    res = a * b;
    printf("%d * %d = %d\n", a, b, res);

    res = a / b;
    printf("%d / %d = %d\n", a, b, res);

    res = a % b;
    printf("%d mod %d = %d\n", a, b, res);

    return 0;
}