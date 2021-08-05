#include <stdio.h>

int findOdd(int arr[], int n);

int main(int argc, char const *argv[])
{
    int arr[] = {12, 12, 14, 90, 14, 14, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The odd occuring element is: %d", findOdd(arr, n));
    return 0;
}

int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
    {
        res ^= arr[i];
    }
    return res;
}