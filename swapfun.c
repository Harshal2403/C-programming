#include <stdio.h>

int swap(int, int);
int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swapping,\na = %d\nb = %d\n", a, b);

    swap(a, b);

    return 0;
}

int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping,\na = %d\nb = %d\n", a, b);
    return a;
}