#include <stdio.h>

int f1()
{
    return 5;
}

int f2()
{
    return 10;
}
int main()
{
    int i = (5, 10);
    printf("%d", i);

    int j = (f1(), f2());
    printf("%d", j);
    return 0;
}
