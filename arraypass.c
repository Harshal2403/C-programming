#include<stdio.h>

int getarray(int *arr)
{
    printf("Elements of array are:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    getarray(arr);
    return 0;
}