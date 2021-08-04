#include <stdio.h>

int main()
{
    int a = 10, b = 4;

    if (a > b)
        printf("%d is greater than %d\n", a, b);
    else
        printf("%d is greater than %d\n", b, a);

    if (a < b)
        printf("%d is greater than %d\n", b, a);
    else
        printf("%d is greater than %d\n", a, b);

    if (a >= b)
        printf("%d is greater than & equal to  %d\n", a, b);
    else
        printf("%d is greater than %d\n", b, a);

    if (a <= b)
        printf("%d is greater than & equal to %d\n", b, a);
    else
        printf("%d is greater than %d\n", a, b);

    if (a == b)
        printf("%d is equal to %d\n", a, b);
    else
        printf("%d is not equal to %d\n", a, b);

    if (a != b)
        printf("%d is not equal to %d\n", a, b);
    else
        printf("%d is equal to %d\n", a, b);

    return 0;
}