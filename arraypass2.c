#include<stdio.h>

int *getarray()
{
    static int arr[5];
    printf("Enter elements of a array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
       
    return arr;
}
int main()
{
    int *n;
    // int a[5];
    n = getarray();
    printf("Entered elements are: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",n[i]);
    }
    
    return 0;
}