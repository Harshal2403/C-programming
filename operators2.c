#include <stdio.h>

int main()
{
    int a = 10, res;

    res = a++;
    printf("a = %d & result = %d\n", a, res);

    res = ++a;
    printf("a = %d & result = %d\n", a, res);

    res = a--;
    printf("a = %d & result = %d\n", a, res);

    res = --a;
    printf("a = %d & result = %d\n", a, res);

    return 0;
}