#include <stdio.h>

int main()
{
    unsigned int a = 5, b = 9;

    printf("%d&%d = %d\n", a, b, a & b);

    printf("%d|%d = %d\n", a, b, a | b);

    printf("%d^%d = %d\n", a, b, a ^ b);

    printf("~%d = %d\n", a, ~a);

    printf("%d<<1 = %d\n", a, a << 1);

    printf("%d>>1 = %d\n", a, a >> 1);

    return 0;
}
