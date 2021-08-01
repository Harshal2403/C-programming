#include <stdio.h>

int main()
{
    unsigned int x = -1;
    int y = ~0;
    if (x == y)
        printf("SAME");
    else
        printf("NOT SAME");

    return 0;
}